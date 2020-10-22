int myPin = A2;
int readVal;
float V2 = 0;
int sec = 500;
int greenPin = 9;
int yellowPin = 10;
int redPin = 8;
String a = "The current potentiometer reading is ";
String V = " volts.";
void setup() {
  // put your setup code here, to run once:
  pinMode(myPin,INPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myPin);
  V2 =(5./1023.)*readVal;
  Serial.println(a + V2 + V);
  if(V2 < 3.0){
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  }
  if (V2 >= 3.0 && V2 < 4.0){
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  if (V2 >= 4.0 && V2 <= 5.0){
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
  }
  delay(sec);
}
