int tilt = PB10;
int led = PB11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tilt, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(tilt) == HIGH) {
    Serial.println("Allumer");
    digitalWrite(led, HIGH);
  }
  if (digitalRead(tilt) == LOW) {
    Serial.println("Eteint");
    digitalWrite(led, LOW);
  }
}
