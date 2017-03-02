int ds = 500;

#if defined(CORE_TEENSY)
#define LED_PIN 13
#endif

void setup() {
  // put your setup code here, to run once:
  // allow controlling LED
  pinMode(LED_PIN, OUTPUT);
  // turn the LED on while running
  digitalWrite(LED_PIN, HIGH);

  delay(2000);
    
  Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
    
  delay(500);
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  Keyboard.print("cmd.exe");
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();


  delay(300);
  Keyboard.print("start /max https://domain.tdl/david_hasselhoff_dog.jpg");
  Keyboard.set_key1(KEY_ENTER);   
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
}

void loop() {
  // put your main code here, to run repeatedly:
  // blink quickly when complete
  digitalWrite(LED_PIN, HIGH);
  delay(ds/2);
  digitalWrite(LED_PIN, LOW);
  delay(ds/2);
}