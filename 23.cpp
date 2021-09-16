//Write a program to input a number from the user and print it in reverse order 
#include <iostream>
using namespace std;
main() {
int n;
cout<<"Enter Number :" ;
cin>>n;
while(n!=0)
{
cout<<n%10;
n=n/10;
}
}
