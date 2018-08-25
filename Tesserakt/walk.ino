

void walk () {

  float walk_speed = 1; //map(pot1, 0, 1020, 1, 10);
  //int walk_intv = map(pot2, 0, 400, 0, 30);

  if (walk_counter + walk_speed > num) {
    walk_counter = 0;
  } else {
    walk_counter += walk_speed;
  }

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color(0, 0, 0));
    }
   
    
    strip.setPixelColor(( walk_counter ), strip.Color(maxl, maxl, maxl));
    
    strip.show();
    
  

  
}
