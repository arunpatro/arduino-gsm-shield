int state=LOW;
int in1=4;
int in2=8;
void setup()
{
  Serial.begin(9600);
  pinMode(in1,INPUT);
  pinMode(in2,INPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}
void loop()
{
  state=LOW;
  int i=0;  
  if(digitalRead(in1) == HIGH && digitalRead(in2) == HIGH){
    Serial.println("High input before delay");
    for(i=0;i<10; i++){
     delay(1000);
     if(digitalRead(in1) == LOW || digitalRead(in2) == HIGH) break;
    }
    if(i==10){ 
      Serial.println("High input after delay, LED glows");
      digitalWrite(13,HIGH);
    }
    else{ 
      Serial.println("Low input after delay "); Serial.println(i);
      digitalWrite(13,LOW);
    }
  }
  else{
    Serial.println("Low input before delay");
    digitalWrite(13,LOW);
  }
}
