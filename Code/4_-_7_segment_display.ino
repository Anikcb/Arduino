
int val,cnt;
int arr[11][10]={
                  {1,1,1,1,1,1,0},
                  {0,1,1,0,0,0,0},
                  {1,1,0,1,1,0,1},
                  {1,1,1,1,0,0,1},
                  {0,1,1,0,0,1,1},
                  {1,0,1,1,0,1,1},
                  {1,0,1,1,1,1,1},
                  {1,1,1,0,0,1,0},
                  {1,1,1,1,1,1,1},
                  {1,1,1,1,0,1,1}
                };


void setup()
{
  for(int i=0;i<=10;i++)pinMode(i,OUTPUT);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
}

void loop()
{
  for(int i=0;i<10000;i++)
  {
    for(int k=0;k<15;k++)
    {

      
      val = i;
      cnt=val/1000;
      digitalWrite(7,LOW);
      for(int j=0;j<7;j++)
      {
        digitalWrite(j,arr[cnt][j]);
      }
      delay(5);
      digitalWrite(7,HIGH);
      val-=(cnt*1000);
      

      cnt = val/100;
      digitalWrite(8,LOW);
      for(int j=0;j<7;j++)
      {
        digitalWrite(j,arr[cnt][j]);
      }
      delay(5);
      digitalWrite(8,HIGH);
      val-=(100*cnt);


      cnt = val/10;
      digitalWrite(9,LOW);
      for(int j=0;j<7;j++)
      {
        digitalWrite(j,arr[cnt][j]);
      }
      delay(5);
      digitalWrite(9,HIGH);
      val-=(cnt*10);


      digitalWrite(10,LOW);
      for(int j=0;j<7;j++)
      {
        digitalWrite(j,arr[val][j]);
      }
      delay(5);
      digitalWrite(10,HIGH);
    }
  }
}
