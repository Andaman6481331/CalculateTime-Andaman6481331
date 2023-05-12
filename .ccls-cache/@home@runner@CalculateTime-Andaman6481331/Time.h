#include <iostream>
using namespace std;

void getTime(int &h, int &m){
  cin>>h>>m;
}

int subtract(int h1,int m1,int h2,int m2){
  int h=h2-h1;
  int m=m2-m1;
  if(m<0){
    h-=1;
  }
  if(h<0){
    h+=24;
  }
  return(h);
}

int subtract(int m1,int m2){
  int m=m2-m1;
  if(m<0){
    m+=60;
  }
  return(m);
}