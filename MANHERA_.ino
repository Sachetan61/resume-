

void setup() {
pinMode(2,INPUT);
pinMode(3,INPUT);
Serial.begin(9600);
}


void loop() {static signed int count=0;
  // put your main code here, to run repeatedly:

  if(digitalRead(2)==LOW){count=count-1;
if(count!=-1){Serial.println("Someone has exited room");
Serial.println("the no of students are");
Serial.println(count);
delay(1000);}
  }
  
  else if(digitalRead(3)==LOW)
  {count=count+1;
  Serial.println("Someone has entered room");
Serial.println("the no of students are");
  Serial.println(count);
  delay(1000);
  }
if(count<0)
{
 count=0;
 Serial.println("mallecious acitivity");
 Serial.println("the actual no of students are");
 Serial.println(count);
delay(1000);}
}
