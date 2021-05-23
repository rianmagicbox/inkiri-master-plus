#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196

void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, OUTPUT);

  Serial.begin(9600); 

  tone(12, NOTE_G1, 1000);
  
}

void loop() {
  int buttonBlue = digitalRead(7);
  int buttonWhite = digitalRead(8);
  int buttonBlack = digitalRead(9);
  int buttonRed = digitalRead(10);
  int buttonYellow = digitalRead(11);
  Serial.print(buttonBlue);
  Serial.print(buttonWhite);
  Serial.print(buttonBlack);
  Serial.print(buttonRed);
  Serial.println(buttonYellow);

  if(buttonBlue == 0){
    tone(12, NOTE_G3, 100);
  }
  if(buttonWhite == 0){
    tone(12, NOTE_F3, 100);
  }
  if(buttonBlack == 0){
    tone(12, NOTE_E3, 100);
  }
  if(buttonRed == 0){
    tone(12, NOTE_D3, 100);
  }
  if(buttonYellow == 0){
    tone(12, NOTE_C3, 100);
  }
}
