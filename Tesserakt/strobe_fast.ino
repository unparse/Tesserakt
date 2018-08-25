

  void strobe_fast() {

    if ( strobe_counter +1 >= 4 ) {
      strobe_counter = 0;
    } else {
      strobe_counter++;
    }

    int tempDelay = sin( millis()*0.005) *30 + 10;
    if (tempDelay < 1) { tempDelay = 1; }

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color(0, 0, 0));
    }


    if ( strobe_counter == 0 ) {
      for (int i = 0; i < num/4; i++) {
        strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
      }       
    }


    if ( strobe_counter == 1 ) {
      for (int i = num/4; i < num*2/4; i++) {
        strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
      }       
    }


    if ( strobe_counter == 2 ) {
      for (int i = num*2/4; i < num*3/4; i++) {
        strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
      }       
    }


    if ( strobe_counter == 3 ) {
      for (int i = num*3/4; i < num*4/4; i++) {
        strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
      }       
    }        

    strip.show();
    delay( tempDelay );

    

  }

