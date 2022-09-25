#define LED 7
int cnt = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(cnt == 0){
    digitalWrite(LED, 0);
    delay(1000);
    cnt++;
  }
  while(1){
    if(cnt > 5){
      digitalWrite(LED, 1);
      break;
    }
    digitalWrite(LED, 1);
    delay(100);
    digitalWrite(LED, 0);
    delay(100);
    cnt++;
  }
}
