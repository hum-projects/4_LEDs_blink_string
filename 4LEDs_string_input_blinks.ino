String msg = "What colour do you want to blink (w,y,g,b): ";
int j;
int bt = 500;
int wPin = 13;
int yPin = 9;
int gPin = 6;
int bPin = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(wPin,OUTPUT);
  pinMode(yPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {

  }
  msg = Serial.readString();
  if (msg == "w") {
    for (j=1;j<=4;j+=1){
    digitalWrite(wPin,HIGH);
    delay(2000);
    digitalWrite(wPin,LOW);
    delay(bt);
  }
  }
  else if (msg == "y") {
    for (j=1;j<=4;j+=1){
    digitalWrite(yPin,HIGH);
    delay(2000);
    digitalWrite(yPin,LOW);
    delay(bt);
  }
  }
  else if (msg == "g") {
    for (j=1;j<=4;j+=1){
    digitalWrite(gPin,HIGH);
    delay(bt);
    digitalWrite(gPin,LOW);
    delay(bt);
  }
  }
  else if (msg == "b") {
    for (j=1;j<=4;j+=1){
    digitalWrite(bPin,HIGH);
    delay(bt);
    digitalWrite(bPin,LOW);
    delay(bt);
  }
  }

}
