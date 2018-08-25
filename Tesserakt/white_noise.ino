void white_noise() {


    int now_leds[50];

    for (int i = 0; i < num; i++) {
      strip.setPixelColor(( i ), strip.Color(0, 0, 0));
    }

    for ( int i = 0; i < 50; i++ ) {
      now_leds[i] = round( random( 0, num ) );
    }

    for (int i = 0; i < num; i++) {
      strip.setPixelColor(( now_leds[i] ), strip.Color(0, maxl, 0));
      if ( i > 1 ) { strip.setPixelColor(( now_leds[i]-1 ), strip.Color(0, maxl/2, 0)); }
      if ( i < num -1 ) { strip.setPixelColor(( now_leds[i]+1 ), strip.Color(0, maxl/2, 0)); }
      
      
    }
    strip.show();

  
}

