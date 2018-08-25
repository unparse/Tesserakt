


void read_inputs() {

  
  in1 = analogRead(A0);
  in2 = analogRead(A1);
  in3 = analogRead(A2);
  in4 = analogRead(A3);
  in5 = analogRead(A4);
  in6 = analogRead(A5);
  in7 = analogRead(A6);
  in8 = analogRead(A7);
  
  //in9 = analogRead(A4);
  //in10 = analogRead(A3);
  //in_vol = analogRead(A2);
  //pot1 = analogRead(A8);
  //pot2 = analogRead(A0);
  

  int modecountermax = 1;

  if (in1 < 1050 && in1 > 700) {
    if ( PREMODE != 0 ) {
      PREMODE = 0;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 0;
      } else {
        modecounter++;
      }
    }
  }
  if (in2 < 1050  && in2 > 700) {
    if ( PREMODE != 1 ) {
      PREMODE = 1;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 1;
      } else {
        modecounter++;
      }
    }
  }
  if (in3 < 1050  && in3 > 700) {
    if ( PREMODE != 2 ) {
      PREMODE = 2;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 2;
      } else {
        modecounter++;
      }
    }
  }
  if (in4 < 1050  && in4 > 700) {
    if ( PREMODE != 3 ) {
      PREMODE = 3;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 3;
      } else {
        modecounter++;
      }
    }
  }
  if (in5 < 1050  && in5 > 700) {
    if ( PREMODE != 4 ) {
      PREMODE = 4;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 4;
      } else {
        modecounter++;
      }
    }
  }
  
  if (in6 > 450 && in6 < 456) {
    if ( PREMODE != 6 ) {
      PREMODE = 6;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 6;
      } else {
        modecounter++;
      }
    }
  }
  if (in7 > 450 && in7 < 456) {
    if ( PREMODE != 7 ) {
      PREMODE = 7;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 7;
      } else {
        modecounter++;
      }
    }
  }
  if (in8 > 450 && in8 < 456) {
    if ( PREMODE != 8 ) {
      PREMODE = 8;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 8;
      } else {
        modecounter++;
      }
    }
  }
  /*
  if (in9 > 450 && in9 < 456) {
    if ( PREMODE != 9 ) {
      PREMODE = 9;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 9;
      } else {
        modecounter++;
      }
    }
  }
  if (in10 > 450 && in10 < 456) {
    if ( PREMODE != 10 ) {
      PREMODE = 10;
      modecounter = 0;
    } else {
      if ( modecounter >= modecountermax ) {
        MODE = 10;
      } else {
        modecounter++;
      }
    }
  }  
  */

  Serial.println( "MODE" );      
  //Serial.println( PREMODE );
  //Serial.println( "PREMODE" );      
  //Serial.println( PREMODE );      

  Serial.println( in1 );



  
}
