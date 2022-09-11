# Arduino Semaphore
Little project in arduino about a semaphore made with leds

# Circuit Design

![semaforo](https://user-images.githubusercontent.com/56441252/189544372-11ba7ef8-ff75-435a-a198-54e632d14d53.JPG)

I used 220V (Volts) resistances and common leds. 

# Code

```
#define GREEN 3
#define YELLOW 5
#define RED 6
// greenTime and redTime should be greater than yellowTime to simulate a real semaphore
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
  // I defined greenTime, yellowTime and redTime in that way so you can change them in which you prefer
  delay(greenTime);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(yellowTime);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(redTime);
  digitalWrite(RED, LOW);
}
```
