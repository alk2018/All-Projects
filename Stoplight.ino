void setup() {
  // put your setup code here, to run once:
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(5, HIGH);
 delay(6000);
 digitalWrite(5, LOW);
 digitalWrite(7, HIGH);
 delay(5000);
 digitalWrite(7, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(4, LOW);
 delay(50);
 digitalWrite(8, HIGH);
 delay(6000);
 digitalWrite(8, LOW);
}
