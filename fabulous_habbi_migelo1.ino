int motor=5;
int tilt=6;
int reading;
int s;
void setup()
{
  pinMode(motor, OUTPUT);
    pinMode(tilt, INPUT);
 
}

void loop()
{
reading=digitalRead(tilt);
  if(reading==1){
  digitalWrite(motor,HIGH);
  }
  else{
   digitalWrite(motor,LOW);
  }
  
  
  
  
}