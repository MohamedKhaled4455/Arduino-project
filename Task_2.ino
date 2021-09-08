#define LED 13
#define BUZZER 11
const int LDR_1 = A0;
const int LDR_2 = A1;
int count; 


void setup() {
  // put your setup code here, to run once:
pinMode(BUZZER, OUTPUT);
pinMode(LED, OUTPUT);
pinMode(LDR_1, INPUT);
pinMode(LDR_2, INPUT);
digitalWrite(LED,LOW);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int LDR_1_VAL= analogRead(LDR_1);
int LDR_2_VAL= analogRead(LDR_2);


  
 Serial.println(count);


if (LDR_1_VAL<=700&& count<=5){
  count++;
  delay(1000);

}

  
  if (LDR_2_VAL<650&&count>=0){
  count--;
  delay(1000);

}


  if(count==5){
    digitalWrite(LED,HIGH);
    analogWrite(BUZZER,125);
    delay(500);
    analogWrite(BUZZER,200);
    delay(500);
    }
    else {
       digitalWrite(LED,LOW);
       analogWrite(BUZZER,0);

      
      }
      
  

}
