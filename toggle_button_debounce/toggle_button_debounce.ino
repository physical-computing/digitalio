
int ledPin = 13;
int buttonPin = 2;
int buttonState = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  // or if you want to toggle with debouncing
  buttonState = digitalRead(buttonPin);      // read the state of the pushbutton value:
  if (buttonState == HIGH) {                 // check if the pushbutton is pressed
    ledState = !ledState;                    // if it is, toggle the led status
    digitalWrite(ledPin, ledState);          // set the LED according to the toggled state
    while (buttonState == HIGH) {            // simple debouncing delay
      delay(10);                             // delay a little bit to avoid bouncing
      buttonState = digitalRead(buttonPin);  // read the state of the pushbutton value again
    }
  }
}
