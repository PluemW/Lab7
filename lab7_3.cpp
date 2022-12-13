#include<iostream>

using namespace std;

int adiff(int x, int y){
  x = x%360;
  y = y%360;
  if(x>=y){
    return x-y;
  }if((y-x)<180){
    return y-x;
  }else{
    return 360-(y-x);
  }
}
