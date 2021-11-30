#include<iostream>

using namespace std;

int adiff(int a,int b){

  if(a>360 || a<-360){
    a=a%360;
  }
  if(b>360 || b<-360){
    b=b%360;
  }


int c;
  if(a>b){
    c=a-b;
  }else{
    c=b-a;
  }
  if(c>180){
    c=(c-360)*-1;
  }
  return c;
}

int main(){
  int a,b;
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
}
