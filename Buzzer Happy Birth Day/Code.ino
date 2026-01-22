//#define NOTE_B0  31
//#define NOTE_C1  33
//#define NOTE_CS1 35
//#define NOTE_D1  37
//#define NOTE_DS1 39
//#define NOTE_E1  41
//#define NOTE_F1  44
//#define NOTE_FS1 46
//#define NOTE_G1  49
//#define NOTE_GS1 52
//#define NOTE_A1  55
//#define NOTE_AS1 58
//#define NOTE_B1  62
//#define NOTE_C2  65
//#define NOTE_CS2 69
//#define NOTE_D2  73
//#define NOTE_DS2 78
//#define NOTE_E2  82
//#define NOTE_F2  87
//#define NOTE_FS2 93
//#define NOTE_G2  98
//#define NOTE_GS2 104
//#define NOTE_A2  110
//#define NOTE_AS2 117
//#define NOTE_B2  123
//#define NOTE_C3  131
//#define NOTE_CS3 139
//#define NOTE_D3  147
//#define NOTE_DS3 156
//#define NOTE_E3  165
//#define NOTE_F3  175
//#define NOTE_FS3 185
//#define NOTE_G3  196
//#define NOTE_GS3 208
//#define NOTE_A3  220
//#define NOTE_AS3 233
//#define NOTE_B3  247
//#define NOTE_C4  262
//#define NOTE_CS4 277
//#define NOTE_D4  294
//#define NOTE_DS4 311
//#define NOTE_E4  330
//#define NOTE_F4  349
//#define NOTE_FS4 370
//#define NOTE_G4  392
//#define NOTE_GS4 415
//#define NOTE_A4  440
//#define NOTE_AS4 466
//#define NOTE_B4  494
//#define NOTE_C5  523
//#define NOTE_CS5 554
//#define NOTE_D5  587
//#define NOTE_DS5 622
//#define NOTE_E5  659
//#define NOTE_F5  698
//#define NOTE_FS5 740
//#define NOTE_G5  784
//#define NOTE_GS5 831
//#define NOTE_A5  880
//#define NOTE_AS5 932
//#define NOTE_B5  988
//#define NOTE_C6  1047
//#define NOTE_CS6 1109
//#define NOTE_D6  1175
//#define NOTE_DS6 1245
//#define NOTE_E6  1319
//#define NOTE_F6  1397
//#define NOTE_FS6 1480
//#define NOTE_G6  1568
//#define NOTE_GS6 1661
//#define NOTE_A6  1760
//#define NOTE_AS6 1865
//#define NOTE_B6  1976
//#define NOTE_C7  2093
//#define NOTE_CS7 2217
//#define NOTE_D7  2349
//#define NOTE_DS7 2489
//#define NOTE_E7  2637
//#define NOTE_F7  2794
//#define NOTE_FS7 2960
//#define NOTE_G7  3136
//#define NOTE_GS7 3322
//#define NOTE_A7  3520
//#define NOTE_AS7 3729
//#define NOTE_B7  3951
//#define NOTE_C8  4186
//#define NOTE_CS8 4435
//#define NOTE_D8  4699
//#define NOTE_DS8 4978
//#define REST      0
//int tempo = 140;
//int buzzer = 13;
//int melody[] = {
//  NOTE_C4,4, NOTE_C4,8, 
//  NOTE_D4,-4, NOTE_C4,-4, NOTE_F4,-4,
//  NOTE_E4,-2, NOTE_C4,4, NOTE_C4,8, 
//  NOTE_D4,-4, NOTE_C4,-4, NOTE_G4,-4,
//  NOTE_F4,-2, NOTE_C4,4, NOTE_C4,8,
//  NOTE_C5,-4, NOTE_A4,-4, NOTE_F4,-4, 
//  NOTE_E4,-4, NOTE_D4,-4, NOTE_AS4,4, NOTE_AS4,8,
//  NOTE_A4,-4, NOTE_F4,-4, NOTE_G4,-4,
//  NOTE_F4,-2,
// 
//};
//int notes = sizeof(melody) / sizeof(melody[0]) / 2;
//int wholenote = (60000 * 4) / tempo;
//int divider = 0, noteDuration = 0;
//void setup() {
// 
//}
//void loop() {
//   for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
//    divider = melody[thisNote + 1];
//    if (divider > 0) {
//      noteDuration = (wholenote) / divider;
//    } else if (divider < 0) {
//      noteDuration = (wholenote) / abs(divider);
//      noteDuration *= 1.5;
//    }
//    tone(buzzer, melody[thisNote], noteDuration * 0.9);
//    delay(noteDuration);
//    noTone(buzzer);
//  }
//}

/* Melody
 * (cleft) 2005 D. Cuartielles for K3
 *
 * This example uses a piezo speaker to play melodies.  It sends
 * a square wave of the appropriate frequency to the piezo, generating
 * the corresponding tone.
 *
 * The calculation of the tones is made following the mathematical
 * operation:
 *
 *       timeHigh = period / 2 = 1 / (2 * toneFrequency)
 *
 * where the different tones are described as in the table:
 *
 * note   frequency   period  timeHigh
 * c          261 Hz          3830  1915
 * d          294 Hz          3400  1700
 * e          329 Hz          3038  1519
 * f          349 Hz          2864  1432
 * g          392 Hz          2550  1275
 * a          440 Hz          2272  1136
 * b          493 Hz          2028  1014
 * C          523 Hz          1912  956
 *
 * http://www.arduino.cc/en/Tutorial/Melody
 */

//int speakerPin = 6;
//
//int length = 15; 
//char notes[] = "ccggaagffeeddc "; 
//int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
//
//int tempo = 300;
//
//void playTone(int tone, int duration) {
//  for (long i = 0; i < duration * 1000L; i += tone * 2) {
//    digitalWrite(speakerPin, HIGH);
//    delayMicroseconds(tone);
//    digitalWrite(speakerPin, LOW);
//    delayMicroseconds(tone);
//  }
//}
//
//void playNote(char note, int duration) {
//  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
//  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
//
//  // play the tone corresponding to the note name
//  for (int i = 0; i < 8; i++) {
//    if (names[i] == note) {
//      playTone(tones[i], duration);
//    }
//  }
//}
//
//void setup() {
//  pinMode(speakerPin, OUTPUT);
//}
//
//void loop() {
//  for (int i = 0; i < length; i++) {
//    if (notes[i] == ' ') {
//      delay(beats[i] * tempo); // rest
//    } else {
//      playNote(notes[i], beats[i] * tempo);
//    }
//    // pause between notes
//    delay(tempo / 2);
//  }
//}

void setup() {

  pinMode(8,OUTPUT);

}

void loop() {
  noTone(8);
  delay(1000);
  tone(8,396,400);//5
  delay(200);
  noTone(8);
  tone(8,660,400);//3 tinggi
  delay(200);
  noTone(8);
  
  tone(8,594,400);//2 tinggi
  delay(300);
  noTone(8);


  tone(8,528,400);// 1 tinggi
  delay(200);

  delay(100);
  delay(100);

  tone(8,495,400);// 7
  delay(400);
  noTone(8);

  tone(8,594,400);// 2 tinggi
  delay(200);
  noTone(8);
  tone(8,528,400);// 1 tinggi
  delay(200);
  noTone(8);
  tone(8,495,400);// 7
  delay(200);
  noTone(8);
  tone(8,440,400);// 6
  delay(200);
  noTone(8);
  tone(8,396,400);// 5
  delay(300);
  noTone(8);

  delay(100);
  delay(100);
  delay(100);

  noTone(8);
  delay(1000);
  tone(8,440,400);// 6
  delay(200);
  noTone(8);
  tone(8,495,400);// 7
  delay(200);
  noTone(8);
  tone(8,528,400);// 1 tinggi
  delay(300);
  noTone(8);
  tone(8,396,400);//5
  delay(300);
  noTone(8);

  delay(100);
  delay(100);

  tone(8,528,400);// 1 tinngi
  delay(300);
  noTone(8);
  tone(8,660,400);//3 tinggi
  delay(200);
  noTone(8);
  tone(8,792,400);//5 tinngi
  delay(300);
  noTone(8);
  tone(8,660,400);//3 tinggi
  delay(200);
  noTone(8);
  tone(8,528,400);// 1 tinggi
  delay(200);
  noTone(8);
  tone(8,594,400);// 2 tinggi
  delay(300);
  noTone(8);

  
  delay(100);
  delay(100);
  delay(100);

  noTone(8);
  delay(1000);
  tone(8,792,400);//5 tinngi
  delay(200);
  noTone(8);
  tone(8,660,400);//3 tinggi
  delay(200);
  noTone(8);
  tone(8,594,400);// 2 tinggi
  delay(300);
  noTone(8);
  
  tone(8,528,400);// 1 tinggi
  delay(200);
  noTone(8);

  
  delay(100);
  delay(100);

  tone(8,660,400);//3 tinggi
  delay(200);
  noTone(8);
  tone(8,792,400);//5 tinngi
  delay(200);
  noTone(8);
  tone(8,660,400);//3 tinggi
  delay(200);
  noTone(8);
  tone(8,594,400);// 2 tinggi
  delay(200);
  noTone(8);
  tone(8,528,400);// 1 tinggi
  delay(300);
  noTone(8);
  tone(8,440,400);// 6
  delay(200);
  noTone(8);

  delay(100);
  delay(100);
  delay(100);

  noTone(8);
  delay(1000);
  tone(8,495,400);// 7
  delay(400);
  noTone(8);
  tone(8,528,400);// 1 tinngi
  delay(300);
  noTone(8);
  tone(8,440,400);// 6
  delay(300);
  noTone(8);
  tone(8,396,400);// 5
  delay(400);
  noTone(8);

  delay(100);

  tone(8,594,400);// 2 tinggi
  delay(200);
  noTone(8);
  tone(8,660,400);//3 tinggi
  delay(200);
  noTone(8);
  tone(8,704,400);//4 tinggi
  delay(200);
  noTone(8);
  tone(8,594,400);// 2 tinggi
  delay(200);
  noTone(8);
  tone(8,440,400);// 6
  delay(200);
  noTone(8);
  tone(8,495,400);// 7
  delay(300);
  noTone(8);
  tone(8,528,400);// 1 tinggi
  delay(300);
  noTone(8);

  delay(100);
  delay(100);
  delay(100);
}
