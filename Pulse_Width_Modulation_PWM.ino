int led = 4;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(led, 0);
delay(500);
analogWrite(led, 100);
delay(500);
analogWrite(led, 200);
delay(500);
analogWrite(led, 300);
delay(500);
analogWrite(led, 400);
delay(500);
analogWrite(led, 500);
delay(500);
analogWrite(led, 600);
delay(500);
analogWrite(led, 700);
delay(500);
analogWrite(led, 800);
delay(500);
analogWrite(led, 900);
delay(500);
analogWrite(led, 1000);
delay(500);
analogWrite(led, 0);
}
