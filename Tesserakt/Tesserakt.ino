#include <Adafruit_NeoPixel.h>
#include <math.h>

#define PIN 5
#define num 40

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_RGB     Pixels are wired for RGB bitstream
//   NEO_GRB     Pixels are wired for GRB bitstream
//   NEO_HZ400  400 KHz bitstream (e.g. FLORA pixels)
//   NEO_KHZ800  800 KHz bitstream (e.g. High Density LED strip)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(num, PIN, NEO_GRB);


// STROBE_FAST, STROBE, THREE, RGB_STROBE, WALK_MULTIPLE, WALK, WHITE_NOISE, BREATHE_WHITE

int MODE = 0, PREMODE = 0, modecounter;
int STROBE = 1, MUSIC = 100, RGB_STROBE = 3, BREATHE_WHITE = 10, WHITE_NOISE = 6, STROBE_FAST = 10, WALK = 0, WALK_MULTIPLE = 4, THREE = 2;
int MODENUM = 5;

int maxl = 100;

int vol = 0;
float total = 0;
int fadeCol = 0;
int val[25];
int volLast = 0;
int fadeAmt = 0;
int counter = 0;


int strobe_counter = 0;
int rgb_strobe_counter;
int walk_counter, walk_multiple_counter;
int walk_multiples[50];

int rand_counter; 

int walk_mult_starts[] = {0,  50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550};
int walk_mult_len[] =    {50, 50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50};

int in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, in_vol, pot1, pot2;


void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  Serial.begin(9600);


  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  //pinMode(A8, INPUT);

  /*
  pinMode(A9, INPUT);
  pinMode(A10, INPUT);
  pinMode(A11, INPUT);
  pinMode(A12, INPUT);
  pinMode(A13, INPUT);
  */

    for ( int i = 0; i < 50; i++ ) {
      walk_multiples[i] = round( random( 1, num ) );
    }  
}






void loop() {

  /*
  if ( analogRead(A0) >= 100 && MODE == STROBE ) {
    MODE = MUSIC;
  } else if ( analogRead(A0) <= 100 && MODE == MUSIC ) {
    MODE = STROBE;
  }
  */

  /*
  
  counter++;
  
  if ( counter >= 1000 ) {
    counter = 0;
    if ( MODE +1 <= MODENUM ) {
      MODE++;
    } else {
      MODE = 0;
    }
  }

  */
  
  

  //read_inputs();


  if ( MODE == MUSIC ) {    
    music();
  } else if ( MODE == STROBE ) {
    strobe();
  } else if ( MODE == RGB_STROBE) {
    rgb_strobe();
  } else if ( MODE == BREATHE_WHITE ) {
    breathe_white();
  } else if ( MODE == WHITE_NOISE ) {
    white_noise();
  } else if ( MODE == STROBE_FAST ) {
    strobe_fast();
  } else if ( MODE == WALK ) {
    walk();
  } else if ( MODE == WALK_MULTIPLE ) {
    walk_multiple();
  } else if ( MODE == THREE ) {
    three();
  }




}











