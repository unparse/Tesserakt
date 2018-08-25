
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for (j = 0; j < 256 * 5; j++) { // 5 cycles of all colors on wheel
    for (i = 0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
    vol = analogRead(A0);
    if (vol > 10) {
      return;
    }
  }
}

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(0, 0, 0);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, 0, 0);
  } else {
    WheelPos -= 170;
    return strip.Color(0, 0, 0);
  }
}




void music() {

fadeCol = 0;
    total = 0;

    for (int i = 0; i < 80; i++) {
      counter = 0;
      do {
        vol = analogRead(A1);


        counter = counter + 1;
        if (counter > 500) {
          for (int i = 0; i < 25; i++) {
            rainbowCycle(10);
          }
        }
      } while (vol == 0);

      total = total + vol;
    }

    vol = total / 80;
    //Serial.println(vol);

    vol = map(vol, 60, 100, 0, 20);


    if (volLast > vol) {
      vol = volLast - 4;
    }

    volLast = vol;
    fadeAmt = 0;

    //Serial.print(vol);
    for (int i = 0; i < 25; i++) {
      if (i < vol) {
        strip.setPixelColor((i + 25), strip.Color(255, 0, 0));
        strip.setPixelColor((25 - i), strip.Color(255, 0, 0));
      } else if (i < (vol + 8)) {
        strip.setPixelColor((i + 25), strip.Color(125, 0, 2));
        strip.setPixelColor((25 - i), strip.Color(125, 0, 2));
      } else {
        strip.setPixelColor((i + 25), strip.Color(0, 0, 0));
        strip.setPixelColor((25 - i), strip.Color(0, 0, 0));
      }
    }

    strip.show();

}
