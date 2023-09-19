#define PIN_LED 7
unsigned int count,toggle;
unsigned int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while(!Serial) { 
    ;
   }
   count = toggle = 1;
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  for(i = 0; i < 10; i++) {
    Serial.println(++count);
    toggle = toggle == 0? 0:1;
    digitalWrite(PIN_LED,toggle);
    delay(100);
    Serial.println(--count);
    toggle = toggle == 1? 0:1;
    digitalWrite(PIN_LED,toggle);
    delay(100);
  }
  count = toggle == 1? 0:1;
  while(1) {
    ;
  }
}
