#include <iostream>
using namespace std;

int main() 
{int num1, num2;

  char op;
  
  
  cin>>op;
  cin >> num1 , num2;
  
  switch (op)
  {
    case '+':
    cout << (num1+ num2);
    break;
    
    case '-':
    cout << (num1-num2);
    break;
    
    case '*':
    cout<< (num1* num2);
    break;
    
    case'/':
    cout<< (num1/num2);
    break;
    
    default:
    cout<<"error , the operator is wrong";
    
  }
  return 0;
  
}
