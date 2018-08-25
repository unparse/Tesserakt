

void walk_multiple() {

    for (int i = 0; i < num; i++) {
      strip.setPixelColor(( i ), strip.Color(0, 0, 0));
    }

    for ( int i = 0; i < 10; i++ ) {
      if ( walk_multiples[i] > num ) {
        walk_multiples[i] = 0;
      } else {
        walk_multiples[i]++;        
      }
    }

    for (int i = 0; i < 10; i++) {
      strip.setPixelColor(( walk_multiples[i] ), strip.Color(maxl, 0, maxl));
    }
    strip.show();
    


  
}

