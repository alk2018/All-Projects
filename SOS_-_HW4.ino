int redLED=12;
int yellowLED=11;
int greenLED=9;
float pi=3.14;
int redW=50;
int yellowW=250;
int greenW=500;
int LongW = 1000;

String myName = "Albert Kodua";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Blink RED LED 5 times
  digitalWrite(redLED, HIGH);
  delay(redW);
  digitalWrite(redLED, LOW);
  delay(redW);

  digitalWrite(redLED, HIGH);
  delay(redW);
  digitalWrite(redLED, LOW);
  delay(redW);

  digitalWrite(redLED, HIGH);
  delay(redW);
  digitalWrite(redLED, LOW);
  delay(redW);

  digitalWrite(redLED, HIGH);
  delay(redW);
  digitalWrite(redLED, LOW);
  delay(redW);

  digitalWrite(redLED, HIGH);
  delay(redW);
  digitalWrite(redLED, LOW);
  delay(redW);

  //Blink YELLOW LED 10 times
  
  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  digitalWrite(yellowLED, HIGH);
  delay(yellowW);
  digitalWrite(yellowLED, LOW);
  delay(yellowW);

  //Blink GREEN LED 15 times
  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  digitalWrite(greenLED, HIGH);
  delay(greenW);
  digitalWrite(greenLED, LOW);
  delay(greenW);

  //Wait one second.
  delay(LongW);
}
