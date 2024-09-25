//basics of string manipulation

#include <iostream>
#include<string>
using namespace std;

int main() 
{
 string str="Good";
 
 //concentenation
 string greeting= str+" Morning! ";
 cout<<"concatenation = "<<greeting<<endl;
 
 //substring
 string part=greeting.substr(5,7); //Extracts "World"
 cout<<"Substring = "<<part<<endl;
 
 //find
 size_t pos=greeting.find("Morning");
 cout<<"Find Morning found at position "<<pos<<endl;
 
 //Replace
 string replaced=greeting;
 replaced.replace(pos,7,"day"); 
 cout<<"Replace = "<<replaced<<endl;
 
 //insert
 string inserted=greeting;
 inserted.insert(5,"beautiful ");
 cout<<"inserted = "<<inserted<<endl;
 
 //Erase
 string erased=greeting;
 erased.erase(5,7); //Erased Morning 
 cout<<"erase = "<<erased<<endl;
 
 //To uppercase
 string  uppercase=greeting;
 for (char &b:uppercase) b=toupper(b);
 cout<<"To uppercase = "<<uppercase<<endl;
 
 //To lowercase
 string  lowercase=greeting;
 for (char &b:lowercase) b=tolower(b);
 cout<<"To lowercase = "<<lowercase<<endl;
 
 return 0;
 
}