int red=12;
int yellow=8;
int green=7;
int button=4;
int reading=0;
int counter=0;

void setup()
{ 
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(button,INPUT); 
}


void loop()
{
  reading=digitalRead(button);
  if(reading==HIGH)
  {
   counter++;
   if (counter==1){
      digitalWrite(red,HIGH);
      delay(500);}
    else if(counter==2)
    {
    digitalWrite(yellow,HIGH);
      delay(500);
    }
    else if(counter==3)
    {
      digitalWrite(green,HIGH);
      delay(500);
      }
    else if(counter==4)
    {
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      
    }
  
   
  }
else{counter==0;}
}


