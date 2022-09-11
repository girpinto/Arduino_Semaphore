#define GREEN 3
#define YELLOW 5
#define RED 6
#define greenTime 10000
#define yellowTime 1000
#define redTime 10000

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN, HIGH);
  delay(greenTime);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(yellowTime);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(redTime);
  digitalWrite(RED, LOW);
}
