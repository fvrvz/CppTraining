//Tenary Operator
#include <iostream>
using namespace std;

int main() 
{
  int a, b;
  std::cout<<"Enter a value: ";
  std::cin>>a;
  
  std::cout<<"\nEnter a value: ";
  std::cin>>b;
    
    (a==b)?std::cout << "\na and b is equal" : std::cout<<"\na and b is not-equal";
    return 0;
}
