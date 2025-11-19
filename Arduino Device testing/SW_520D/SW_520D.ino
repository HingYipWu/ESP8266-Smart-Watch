

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); 
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(2);
  Serial.println(value);

}
