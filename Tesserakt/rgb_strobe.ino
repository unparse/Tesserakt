void rgb_strobe() {

    int strobe_val = int( sin(millis() * 0.5) ) *maxl/2 +maxl/2;

    if ( rgb_strobe_counter +1 >= 3 ) {
      rgb_strobe_counter = 0;
    } else {
      rgb_strobe_counter++;
    }
    
    for (int i = 0; i < num; i++) {
      if ( rgb_strobe_counter == 0 ) {
        strip.setPixelColor((i), strip.Color(strobe_val, 0, 0));
      } else if ( rgb_strobe_counter == 1 ) {
        strip.setPixelColor((i), strip.Color(0, strobe_val, 0));
      } else if ( rgb_strobe_counter == 2 ) {
        strip.setPixelColor((i), strip.Color(0, 0, strobe_val));      
      }
    }
    strip.show();
    delay( 10 );

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color(0, 0, 0));
    }
    strip.show();
    delay( 10);
  





  
}
