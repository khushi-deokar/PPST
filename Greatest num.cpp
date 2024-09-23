//check for the greatest number
#include <iostream>
using namespace std;

int main() 
{
  int a=2;
  int b=4;
  int c=1;
  
  if(a>=b && a>=c)
  {
    cout<<"a is greatest among the three"<<endl;
    
  }
  else if(b>=a && b>=c)
  {
    cout<<"b is greatest among the three"<<endl;
  }
  
  else
  {
    cout<<"c is greatest among the three"<<endl;
  }
  return 0;
}
