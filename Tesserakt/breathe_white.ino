
int breathe_delay = 10;

void breathe_white() {

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color(0, 0, 0));
    }
    for (int i = 0; i < 200; i++) {
      strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
    }
    strip.show();


    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color(0, 0, 0));
    }
    for (int i = 227; i < 250+30; i++) {
      strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
    }
    strip.show();    

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color(0, 0, 0));
    }
    for (int i = 250+30 +19; i < 250+30 +18 +53; i++) {
      strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
    }
    strip.show();        

    for (int i = 0; i < num; i++) {
      strip.setPixelColor((i), strip.Color(0, 0, 0));
    }
    for (int i =  250+30 +18 +53 +30; i < 250+30 +18 +53 +26 +50; i++) {
      strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
    }
    for (int i =  250+30 +18 +52 +45 +150; i < 250+30 +18 +52 +45 +150 +48; i++) {
      strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
    }
    for (int i =  250+30 +18 +52 +45 +150 +164; i < 250+30 +18 +52 +45 +150 +48 +165; i++) {
      strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
    }    
    for (int i =  250+30 +18 +52 +45 +150 +328; i < 250+30 +18 +52 +45 +150 +48 +328; i++) {
      strip.setPixelColor((i), strip.Color(maxl, maxl, maxl));
    }        


    strip.show();            

}
