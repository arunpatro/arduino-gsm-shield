int state=LOW;
int in1=4;

void setup()
{
  Serial.begin(9600);
  pinMode(in1,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}
void loop()
{
  state=LOW;
  int i=0;  
  if(digitalRead(in1) == LOW){
    Serial.println("Low input before delay");
    for(i=0;i<5; i++){
     delay(1000);
     if(digitalRead(in1) == HIGH) break;
    }
    if(i==5){ 
      Serial.println("ATD08388808018;");
      blink(15);
    }
    else{ 
      Serial.println("High input after delay "); Serial.println(i);
      digitalWrite(13,LOW);
    }
  }
  else{
    Serial.println("High input before delay");
    digitalWrite(13,LOW);
  }
}
void blink(int sec)
{
  for(int i=0;i<sec*2;i++)
  {
    digitalWrite(13,HIGH);
    delay(500);
    
    digitalWrite(13,LOW);
    delay(500);
  }
}
