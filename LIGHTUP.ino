const int bluePin = 2;
const int yellowPin = 3;
const int blue2Pin = 4;
const int redPin = 5;
const int blue3Pin = 6;
const int yellow2Pin = 7;
const int greenPin = 8;
const int red2Pin = 9;
const int blue4Pin = 10;
const int yellow3Pin = 11;
const int blue5Pin = 12;
int led[]={2,3,4,5,6,7,8,9,10,11,12};
const int switchPin = 13;
int x;

void setup()
{
  setup1();
}

void setup1(){
  for(x=0;x<13;x++){
    pinMode(x,OUTPUT);
  }
  pinMode(switchPin, INPUT);
}

void loop() {
  int switchVal;
  switchVal = digitalRead(switchPin);
  if(switchVal == HIGH) {
    delay(850);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(100);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(115);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(115);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(100);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(115);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(75);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(75);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(75);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(75);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(75);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(75);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(75);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(75);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(75);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);
  //
  delay(280);
  digitalWrite(blue3Pin,HIGH);
  delay(280);
  digitalWrite(blue3Pin, LOW);
  delay(335);
  digitalWrite(blue3Pin, HIGH);
  delay(280);
  digitalWrite(blue3Pin, LOW);
  delay(335);
  digitalWrite(blue3Pin, HIGH);
  delay(280);
  digitalWrite(blue3Pin, LOW);
  delay(535);
  digitalWrite(blue3Pin, HIGH);
  delay(280);
  digitalWrite(blue3Pin, LOW);
  delay(335);
  digitalWrite(blue3Pin, HIGH);
  delay(280);
  digitalWrite(blue3Pin, LOW);
  delay(335);
  digitalWrite(blue3Pin, HIGH);
  delay(280);
  digitalWrite(blue3Pin, LOW);
  delay(75);
  //
  digitalWrite(yellow3Pin, HIGH);
  delay(100);
  digitalWrite(yellow3Pin, LOW);
  delay(50);
  digitalWrite(yellow3Pin, HIGH);
  delay(295);
  digitalWrite(yellow3Pin, LOW);
  delay(190);
  digitalWrite(blue4Pin, HIGH);
  delay(100);
  digitalWrite(blue4Pin, LOW);
  delay(50);
  digitalWrite(blue4Pin, HIGH);
  delay(295);
  digitalWrite(blue4Pin, LOW);
  delay(190);
  digitalWrite(red2Pin, HIGH);
  delay(100);
  digitalWrite(red2Pin, LOW);
  delay(50);
  digitalWrite(red2Pin, HIGH);
  delay(295);
  digitalWrite(red2Pin, LOW);
  delay(190);
  digitalWrite(yellow2Pin, HIGH);
  delay(100);
  digitalWrite(yellow2Pin, LOW);
  delay(50);
  digitalWrite(yellow2Pin, HIGH);
  delay(295);
  digitalWrite(yellow2Pin, LOW);
  delay(715);
  //
  digitalWrite(yellow3Pin, HIGH);
  delay(100);
  digitalWrite(yellow3Pin, LOW);
  delay(50);
  digitalWrite(yellow3Pin, HIGH);
  delay(295);
  digitalWrite(yellow3Pin, LOW);
  delay(190);
  digitalWrite(blue4Pin, HIGH);
  delay(100);
  digitalWrite(blue4Pin, LOW);
  delay(50);
  digitalWrite(blue4Pin, HIGH);
  delay(295);
  digitalWrite(blue4Pin, LOW);
  delay(190);
  digitalWrite(red2Pin, HIGH);
  delay(100);
  digitalWrite(red2Pin, LOW);
  delay(50);
  digitalWrite(red2Pin, HIGH);
  delay(295);
  digitalWrite(red2Pin, LOW);
  delay(190);
  digitalWrite(yellow2Pin, HIGH);
  delay(100);
  digitalWrite(yellow2Pin, LOW);
  delay(50);
  digitalWrite(yellow2Pin, HIGH);
  delay(295);
  digitalWrite(yellow2Pin, LOW);
  delay(715);
  //
  digitalWrite(blue5Pin, HIGH);
  delay(100);
  digitalWrite(blue5Pin, LOW);
  delay(50);
  digitalWrite(blue5Pin, HIGH);
  delay(295);
  digitalWrite(blue5Pin, LOW);
  delay(190);
  digitalWrite(yellow3Pin, HIGH);
  delay(100);
  digitalWrite(yellow3Pin, LOW);
  delay(50);
  digitalWrite(yellow3Pin, HIGH);
  delay(295);
  digitalWrite(yellow3Pin, LOW);
  delay(190);
  digitalWrite(blue4Pin, HIGH);
  delay(100);
  digitalWrite(blue4Pin, LOW);
  delay(50);
  digitalWrite(blue4Pin, HIGH);
  delay(295);
  digitalWrite(blue4Pin, LOW);
  delay(190);
  digitalWrite(greenPin, HIGH);
  delay(100);
  digitalWrite(greenPin, LOW);
  delay(50);
  digitalWrite(greenPin, HIGH);
  delay(295);
  digitalWrite(greenPin, LOW);
  delay(715);
  //
  digitalWrite(blue5Pin, HIGH);
  delay(100);
  digitalWrite(blue5Pin, LOW);
  delay(50);
  digitalWrite(blue5Pin, HIGH);
  delay(295);
  digitalWrite(blue5Pin, LOW);
  delay(190);
  digitalWrite(yellow3Pin, HIGH);
  delay(100);
  digitalWrite(yellow3Pin, LOW);
  delay(50);
  digitalWrite(yellow3Pin, HIGH);
  delay(295);
  digitalWrite(yellow3Pin, LOW);
  delay(190);
  digitalWrite(blue4Pin, HIGH);
  delay(100);
  digitalWrite(blue4Pin, LOW);
  delay(50);
  digitalWrite(blue4Pin, HIGH);
  delay(295);
  digitalWrite(blue4Pin, LOW);
  delay(190);
  digitalWrite(yellow2Pin, HIGH);
  delay(100);
  digitalWrite(yellow2Pin, LOW);
  delay(50);
  digitalWrite(yellow2Pin, HIGH);
  delay(295);
  digitalWrite(yellow2Pin, LOW);
  //
  delay(200);
  digitalWrite(redPin, HIGH);
  delay(800);
  digitalWrite(redPin, LOW);
  delay(30);
  digitalWrite(blue2Pin, HIGH);
  delay(1000);
  digitalWrite(blue2Pin, LOW);
  }
}

