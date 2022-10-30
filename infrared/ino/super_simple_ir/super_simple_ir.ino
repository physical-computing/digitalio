int led = 9;
int ir = 7;
int ir_value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ir, INPUT);
}

void loop() {
  ir_value = digitalRead(ir);
  digitalWrite(led, ir_value);
  Serial.println(ir_value);

}