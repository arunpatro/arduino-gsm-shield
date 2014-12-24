void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int condition=1,i=0;
  char txt[200];
  while(condition)
  {
    if (Serial.available()>0)
    {
      char temp=Serial.read();
      if (temp == '\n') {
        txt[i]='\0';
        condition=0;
      }
      txt[i]=temp;
    }
  }
  
  Serial.println(txt);
  delay(5000);
}
