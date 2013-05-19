const int chan1Pin = 5;
const int chan2Pin = 6;
const int chan3Pin = 7;

int chan1State = 0;
int chan2State = 0;
int chan3State = 0;

String inputString = "";
boolean stringComplete = false;
char inByte = 0;

void setup()
{
  pinMode(chan1Pin, INPUT);
  pinMode(chan2Pin, INPUT);
  pinMode(chan3Pin, INPUT);
  Serial.begin(9600);
  //Serial.println("Nike Free Remote");
  inputString.reserve(50);
}

void loop()
{
  if (Serial.available()>0)
  {
   inByte = Serial.read();
   if (inByte == 't')
   {
     Serial.println("ok");
   }
  }
  if(digitalRead(chan1Pin))
  {
    Serial.println("1");
    delay(1000);
  }
  
    if(digitalRead(chan2Pin))
  {
    Serial.println("2");
    delay(1000);
  }
  
    if(digitalRead(chan3Pin))
  {
    Serial.println("3");
    delay(1000);
  }

}

 
