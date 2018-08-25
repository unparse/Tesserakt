

void three() {

    int speed = map(pot1, 0, 1020, 3, 10);

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color( 0 , 0, 0 ));
    }
  
    for (int i = 0; i < num/speed; i++) {
      strip.setPixelColor((i*speed), strip.Color( 0 , 0 , maxl ));
    }

    strip.show();

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color( 0 , 0, 0 ));
    }

    for (int i = 0; i < num/speed; i++) {
      strip.setPixelColor((i*speed+1), strip.Color( 0 , 0 , maxl ));
    }

    strip.show();

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color( 0 , 0, 0 ));
    }


    for (int i = 0; i < num/speed; i++) {
      strip.setPixelColor((i*speed+2), strip.Color( 0 , 0 , maxl ));
    }

    strip.show();        

    
  
  
  
}
