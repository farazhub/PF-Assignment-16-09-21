/*Write a program to input number from the user and 
print its factual*/
#include <iostream>
using namespace std;
main()
{
 int n1,fact=1,number;
 cout<<"Enter any Number: ";
cin>>number;
 while(n1<=number){
 n1=1;
 fact=fact*n1;
 n1++;
 }
 cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
}

