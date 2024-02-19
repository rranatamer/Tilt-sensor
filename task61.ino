


void setup()
{
  pinMode(1, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
 int titl= digitalRead(1);

  if(titl==1){

    digitalWrite(5,1);
  } else{

 digitalWrite(5,1);
  }
}