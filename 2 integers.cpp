//print sum of two numbers
#include<iostream>
using namespace std;

int main()
{
  int first_number , second_number , sum;
  cout<<"enter two integers:";
  cin>>first_number>>second_number;
  
  //sum of two numbers stored in variable sumOfTwoNunbers
  
  sum=first_number + second_number;
  //prints sum
  
  cout<<first_number <<"+"<<second_number<<"="<< sum;
  
  return 0;
  
}