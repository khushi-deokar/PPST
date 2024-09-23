#include <iostream>
using namespace std;

int main() 
{
    int number;
    //check if the number is between 10-20
   cout<<"enter a number"<<endl;
    cin>>number;
    if(number>=10 && number<=20)
    {
      cout<<"the number"<< number <<"is between 10-20"<<endl;
    }
    else
    {
      cout<<"the number"<<number<<"does not come between 10-20"<<endl;
    }
    
    return 0;
}