#define N_B0  31
#define N_C1  33
#define N_CS1 35
#define N_D1  37
#define N_DS1 39
#define N_E1  41
#define N_F1  44
#define N_FS1 46
#define N_G1  49
#define N_GS1 52
#define N_A1  55
#define N_AS1 58
#define N_B1  62
#define N_C2  65
#define N_CS2 69
#define N_D2  73
#define N_DS2 78
#define N_E2  82
#define N_F2  87
#define N_FS2 93
#define N_G2  98
#define N_GS2 104
#define N_A2  110
#define N_AS2 117
#define N_B2  123
#define N_C3  131
#define N_CS3 139
#define N_D3  147
#define N_DS3 156
#define N_E3  165
#define N_F3  175
#define N_FS3 185
#define N_G3  196
#define N_GS3 208
#define N_A3  220
#define N_AS3 233
#define N_B3  247
#define N_C4  262
#define N_CS4 277
#define N_D4  294
#define N_DS4 311
#define N_E4  330
#define N_F4  349
#define N_FS4 370
#define N_G4  392
#define N_GS4 415
#define N_A4  440
#define N_AS4 466
#define N_B4  494
#define N_C5  523
#define N_CS5 554
#define N_D5  587
#define N_DS5 622
#define N_E5  659
#define N_F5  698
#define N_FS5 740
#define N_G5  784
#define N_GS5 831
#define N_A5  880
#define N_AS5 932
#define N_B5  988
#define N_C6  1047
#define N_CS6 1109
#define N_D6  1175
#define N_DS6 1245
#define N_E6  1319
#define N_F6  1397
#define N_FS6 1480
#define N_G6  1568
#define N_GS6 1661
#define N_A6  1760
#define N_AS6 1865
#define N_B6  1976
#define N_C7  2093
#define N_CS7 2217
#define N_D7  2349
#define N_DS7 2489
#define N_E7  2637
#define N_F7  2794
#define N_FS7 2960
#define N_G7  3136
#define N_GS7 3322
#define N_A7  3520
#define N_AS7 3729
#define N_B7  3951
#define N_C8  4186
#define N_CS8 4435
#define N_D8  4699
#define N_DS8 4978

#define N_10  10000
#define N_15  15000
#define N_20  20000
#define N_25  25000
#define N_30  30000
#define N_35  35000
#define N_40  40000

#define singerPin 2
#define melodyPin 3

//Test Melody
int classicMan[] = {
    N_B6, N_B6, N_B6,
    N_E6, N_E6, 0,

    N_B6, N_B6, N_B6, N_B6,
    N_B6, N_B6, N_B6, N_B6,
    N_B6, N_B6, N_B6, N_B6,
    N_B6, N_E6, 0,

    N_B6, N_B6, N_B6, N_B6,
    N_B6, N_B6, N_B6, N_B6,
    N_B6, N_B6, N_B6, N_B6,
    N_B6, N_D7, N_C7

};

int classicManTempo[] = {
    12, 12, 8,
    8, 4, 2,

    12, 12, 8,  8,
    12, 12, 8,  8,
    8,  12, 12, 8,
    8,  4,  2,

    12, 12, 8,  8,
    12, 12, 8,  8,
    8,  12, 12, 8,
    8,  8,  8,  2
};

int freqTest[] = {
    N_10, 0,
    N_15, 0,
    N_20, 0,
    N_25, 0,
    N_30, 0,
    N_35, 0,
    N_40, 0
};

int freqTempo[] = {
    4, 0,
    4, 0,
    4, 0,
    4, 0,
    4, 0,
    4, 0,
    4, 0
};

int melody[] = {
  N_E7, N_E7, 0, N_E7,
  0, N_C7, N_E7, 0,
  N_G7, 0, 0,  0,
  N_G6, 0, 0, 0,

  N_C7, 0, 0, N_G6,
  0, 0, N_E6, 0,
  0, N_A6, 0, N_B6,
  0, N_AS6, N_A6, 0,

  N_G6, N_E7, N_G7,
  N_A7, 0, N_F7, N_G7,
  0, N_E7, 0, N_C7,
  N_D7, N_B6, 0, 0,

  N_C7, 0, 0, N_G6,
  0, 0, N_E6, 0,
  0, N_A6, 0, N_B6,
  0, N_AS6, N_A6, 0,

  N_G6, N_E7, N_G7,
  N_A7, 0, N_F7, N_G7,
  0, N_E7, 0, N_C7,
  N_D7, N_B6, 0, 0
};
//Mario main them tempo
int tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};
//Underworld melody
int underworld_melody[] = {
  N_C4, N_C5, N_A3, N_A4,
  N_AS3, N_AS4, 0,
  0,
  N_C4, N_C5, N_A3, N_A4,
  N_AS3, N_AS4, 0,
  0,
  N_F3, N_F4, N_D3, N_D4,
  N_DS3, N_DS4, 0,
  0,
  N_F3, N_F4, N_D3, N_D4,
  N_DS3, N_DS4, 0,
  0, N_DS4, N_CS4, N_D4,
  N_CS4, N_DS4,
  N_DS4, N_GS3,
  N_G3, N_CS4,
  N_C4, N_FS4, N_F4, N_E3, N_AS4, N_A4,
  N_GS4, N_DS4, N_B3,
  N_AS3, N_A3, N_GS3,
  0, 0, 0
};
//Underwolrd tempo
int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};




//Fast Test Melody
int fastMelody[] = {
    N_B0, N_C1, N_CS1, N_D1, N_DS1, N_E1, N_F1, N_FS1,
    N_G1, N_GS1, N_A1, N_AS1, N_B1, N_C2, N_CS2, N_D2,
    N_DS2, N_E2, N_F2, N_FS2, N_G2, N_GS2, N_A2, N_AS2,
    N_B2, N_C3, N_CS3, N_D3, N_DS3, N_E3, N_F3, N_FS3,
    N_G3, N_GS3, N_A3, N_AS3, N_B3, N_C4, N_CS4, N_D4,
    N_DS4, N_E4, N_F4, N_FS4, N_G4, N_GS4, N_A4, N_AS4,
    N_B4, N_C5, N_CS5, N_D5, N_DS5, N_E5, N_F5, N_FS5,
    N_G5, N_GS5, N_A5, N_AS5, N_B5, N_C6, N_CS6, N_D6,
    N_DS6, N_E6, N_F6, N_FS6, N_G6, N_GS6, N_A6, N_AS6,
    N_B6, N_C7, N_CS7, N_D7, N_DS7, N_E7, N_F7, N_FS7,
    N_G7, N_GS7, N_A7, N_AS7, N_B7, N_C8, N_CS8, N_D8,
    N_DS8,

    N_D8, N_CS8, N_C8, N_B7, N_AS7, N_A7, N_GS7,
    N_G7, N_FS7, N_F7, N_E7, N_DS7, N_D7, N_CS7, N_C7,
    N_B6, N_AS6, N_A6, N_GS6, N_G6, N_FS6, N_F6, N_E6,
    N_DS6, N_D6, N_CS6, N_C6, N_B5, N_AS5, N_A5, N_GS5,
    N_G5, N_FS5, N_F5, N_E5, N_DS5, N_D5, N_CS5, N_C5,
    N_B4, N_AS4, N_A4, N_GS4, N_G4, N_FS4, N_F4, N_E4,
    N_DS4, N_D4, N_CS4, N_C4, N_B3, N_AS3, N_A3, N_GS3,
    N_G3, N_FS3, N_F3, N_E3, N_DS3, N_D3, N_CS3, N_C3,
    N_B2, N_AS2, N_A2, N_GS2, N_G2, N_FS2, N_F2, N_E2,
    N_DS2, N_D2, N_CS2, N_C2, N_B1, N_AS1, N_A1, N_GS1,
    N_G1, N_FS1, N_F1, N_E1, N_DS1, N_D1, N_CS1, N_C1,
    N_B0
};
//Fast Test Tempo
int fastTempo[] = {
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,

    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64
};



// -----------------------------------
// Declare Pins
// -----------------------------------
int led1 = D0;
int buzzer1 = D3;
int buzzer2 = D2;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(buzzer1, OUTPUT);
    pinMode(buzzer2, OUTPUT);

    // Spark cloud function, to be used in the POST URL.
    Spark.function("led",ledToggle);

    // LEDs are off when we start:
    digitalWrite(led1, LOW);
    digitalWrite(buzzer1, LOW);
    digitalWrite(buzzer2, LOW);
}

// -----------------------------------
// Loop
// -----------------------------------
void loop()
{
   // Nothing to do here
}


// -----------------------------------
// Buzzer 01
// -----------------------------------
int song = 0;

void sing(int s) {
    // iterate over the notes of the melody:
    song = s;
    if (song == 1) {
        // -----------
        // MARIO THEME
        // -----------
        int size = sizeof(melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {

            // to calculate the note duration, take one second
            // divided by the note type.
            //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
            int noteDuration = 1000 / tempo[thisNote];

            buzz(melodyPin, melody[thisNote], noteDuration);

            // to distinguish the notes, set a minimum time between them.
            // the note's duration + 30% seems to work well:
            int pauseBetweenNotes = noteDuration * 1.30;
            delay(pauseBetweenNotes);

            // stop the tone playing:
            buzz(melodyPin, 0, noteDuration);

        }
    } else if (song == 2) {
        // -----------------------
        // MARIO UNDERWORLD MELODY
        // -----------------------
        int size = sizeof(underworld_melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {

            int noteDuration = 1000 / underworld_tempo[thisNote];

            buzz(melodyPin, underworld_melody[thisNote], noteDuration);

            int pauseBetweenNotes = noteDuration * 1.30;
            delay(pauseBetweenNotes);

            buzz(melodyPin, 0, noteDuration);

    } else if (song == 3) {
        // -----------
        // CLASSIC MAN
        // -----------
        int size = sizeof(classicMan) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {

            int noteDuration = 1000 / classicManTempo[thisNote];

            buzz(melodyPin, classicMan[thisNote], noteDuration);

            int pauseBetweenNotes = noteDuration * 1.30;
            delay(pauseBetweenNotes);

            buzz(melodyPin, 0, noteDuration);
        }
    } else if (song == 4) {
        // --------------
        // FREQUENCY TEST
        // --------------
        int size = sizeof(freqTest) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {

            int noteDuration = 1000 / freqTempo[thisNote];

            buzz(melodyPin, freqTest[thisNote], noteDuration);

            int pauseBetweenNotes = noteDuration * 1.30;
            delay(pauseBetweenNotes);

            buzz(melodyPin, 0, noteDuration);
        }
    } else if (song == 5) {
        // -------------
        // FAST TONE RUN
        // -------------
        int size = sizeof(fastMelody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {

            int noteDuration = 1000 / fastTempo[thisNote];

            buzz(melodyPin, fastMelody[thisNote], noteDuration);

            int pauseBetweenNotes = noteDuration * 1.30;
            delay(pauseBetweenNotes);

            buzz(melodyPin, 0, noteDuration);
        }
    }
}

void buzz(int targetPin, long frequency, long length) {
  digitalWrite(led1, HIGH);
  // calculate the delay value between transitions
  long delayValue = 1000000 / frequency / 2;
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(led1, LOW);

}

int ledToggle(String command) {
    /* Spark.functions always take a string as an argument and return an integer.
    Since we can pass a string, it means that we can give the program commands on how the function should be used.
    In this case, telling the function "on" will turn the LED on and telling it "off" will turn the LED off.
    Then, the function returns a value to us to let us know what happened.
    In this case, it will return 1 for the LEDs turning on, 0 for the LEDs turning off,
    and -1 if we received a totally bogus command that didn't do anything to the LEDs.
    */

    if (command=="on") {
        digitalWrite(led1,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(led1,LOW);
        return 0;
    }
    else if (command=="blink") {
        digitalWrite(led1,HIGH);
        delay(500);
        digitalWrite(led1,LOW);
        delay(500);
        digitalWrite(led1,HIGH);
        delay(500);
        digitalWrite(led1,LOW);
        delay(500);
        digitalWrite(led1,HIGH);
        delay(500);
        digitalWrite(led1,LOW);
        delay(500);
        digitalWrite(led1,HIGH);
        delay(500);
        digitalWrite(led1,LOW);
        return 0;
    }
    else if (command=="mario") {
        sing(1);
        sing(2);
        return 0;
    }
    else if (command=="classic") {
        sing(3);
        return 0;
    }
    else if (command=="freqTest") {
        sing(4);
        return 0;
    }
    else if (command=="fast") {
        sing(5);
        return 0;
    }
    else {
        return -1;
    }
}
