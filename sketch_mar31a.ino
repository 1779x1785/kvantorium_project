#define RED 11
#define GRN 10
#define BLU 9
void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GRN, OUTPUT);
  pinMode(BLU, OUTPUT);
}
void loop() {
  
for(int i = 0;i<=255;i++){
  analogWrite(RED, i);
  delay(1);
}
for(int i = 255;i>=0;i--){
  analogWrite(RED, i);
  delay(1);
}
for(int i = 0;i<=255;i++){
  analogWrite(GRN, i);
  delay(1);
}
for(int i = 0;i>=0;i--){
  analogWrite(GRN, i);
  delay(1);
}
for(int i = 0;i<=255;i++){
  analogWrite(BLU, i);
  delay(1);
}
for(int i = 0;i>=0;i--){
  analogWrite(BLU, i);
  delay(1);
}
}
