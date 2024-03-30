

#define PUSHBUTTON_PIN  12
#define LED_PIN    26

int button = 0;   // variable for reading the button status

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(PUSHBUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
  button = digitalRead(PUSHBUTTON_PIN);
  if (button == LOW){
    digitalWrite(LED_PIN, HIGH);
    delay(100);
 }
  else{
    digitalWrite(LED_PIN, LOW);
  }
}
