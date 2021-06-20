int rele = 2;
int foto1 = A0;

void setup() {
pinMode(rele,OUTPUT);
pinMode(foto1,INPUT);
Serial.begin(9600);
}

void loop() {
foto1 = analogRead(A0);
Serial.println(foto1);
if (foto1 <= 793){
  digitalWrite(rele,HIGH);
  delay(1000);
  }
else if(foto1 >= 972){
  digitalWrite(rele,LOW);
 delay(1000);
  }
}
