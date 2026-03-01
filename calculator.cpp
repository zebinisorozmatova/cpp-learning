```cpp
#include <iostream>
using namespace std;

int main () {
  int a,b;
  cout<<"Enter two numbers:";
  cin>>a>>b;
  
  cout <<"Sum:"<<a+b<<endl;
  cout<<"Difference:"<<a-b<<endl;
  cout<<"Product:"<<a*b<<endl;
  if (b!=0)cout<<"Division:"<<a/b<<endl;
  else cout<<"Cannot divide by zero"<<endl;
  return 0;
}