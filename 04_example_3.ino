#define PIN_LED 13
unsigned int count,toggle;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while(!Serial) { 
    ;
   }
   Serial.println("Hello World!");
   count = toggle = 0;
   }
   
 void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(++count);
  toggle = toggle == 1? 0:1;
  digitalWrite(PIN_LED,toggle);
  delay(1000);
}
