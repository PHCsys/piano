#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_B5 988
#define NOTE_C6 1047

const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int button5 = 6;
const int button6 = 7;
const int button7 = 8;
const int button8 = 9;
const int BEEP = 10;

void setup() {
    pinMode(button1, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);
    pinMode(button3, INPUT_PULLUP);
    pinMode(button4, INPUT_PULLUP);

    pinMode(button5, INPUT_PULLUP);
    pinMode(button6, INPUT_PULLUP);
    pinMode(button7, INPUT_PULLUP);
    pinMode(button8, INPUT_PULLUP);
    
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if(digitalRead(button1) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_C5, 1000);
    while (1) {
      if (digitalRead(button1) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

    if(digitalRead(button2) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_D5, 1000);
    while (1) {
      if (digitalRead(button2) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

    if(digitalRead(button3) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_E5, 1000);
    while (1) {
      if (digitalRead(button3) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

    if(digitalRead(button4) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_F5, 1000);
    while (1) {
      if (digitalRead(button4) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

    if(digitalRead(button5) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_G5, 1000);
    while (1) {
      if (digitalRead(button5) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

    if(digitalRead(button6) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_A5, 1000);
    while (1) {
      if (digitalRead(button6) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

    if(digitalRead(button7) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_B5, 1000);
    while (1) {
      if (digitalRead(button7) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

      if(digitalRead(button8) == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    tone(BEEP, NOTE_C6, 1000);
    while (1) {
      if (digitalRead(button8) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        noTone(BEEP);
        break;
      }
    }
  }

  
}
