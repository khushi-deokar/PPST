/* program to use operators and operants and perform arithematic operations*/
#include <iostream>
using namespace std;

int main() 
{int number ;
    char op;
    
    //it allows user to enter operator
    //i.e.+,-,*,/
    cin>>op;
    
    //it allows user to enter the operants
  
    
    //switch statement begins
    switch(op)
    {
      case '+':
      cout<<"num 1+ num 2";
      break;
      
      //if user enters -
      case '-':
      cout<<"num 1- num 2";
      break;
      
      //if user enters *
      case'*':
      cout<<"num 1* num 2";
      break;
      
      //if user enters /
      case'/':
      cout<<"num 1/ num 2";
      break;
      //if operator is other than any of the above 
      //error message will display
      
      default :
      cout<<"error! operator is not correct";
      
    }
    //switch statement ends 
    
    return 0;
    
    }