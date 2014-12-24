bool bOK=true;
void setup()
{
  Serial.begin(9600);
  
}
void loop()
{
  
//  while (Serial.available() > 0) {
////Serial.write(Serial.read());
//char inChar = (char)Serial.read();
//bOK = true;
//}
  if(bOK) {
    Serial.println("AT+CMGF=1");
//    delay(500);
    
    Serial.println("AT+CMGS=\"09966004458\"");
//    delay(5000);
//    char p[]=;
    Serial.println("Hello World 3");
//    delay(5000);
    Serial.write(0x0D);
    Serial.write(0x1A);
    
//    Serial.write(0x0A);
//    Serial.println("wait");
  }
  bOK=false;
  delay(500);
}
