#include<iostream>
int main(){
  int a = 13, b = 45;
  a++;
  b--;
  int c = (++a) + (b--);
  std::cout<<a<<" "<<b<<" "<<c;
}

//15 43 59 output
