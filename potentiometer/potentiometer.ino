int pot = 4; 
int value = 0;   
int led = 5 ; 

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT); 
}
void loop() {
  value = analogRead(pot); 
  if(value > 0){
    analogWrite(led, (value/4)); 
    Serial.println(value); 
  }
}
