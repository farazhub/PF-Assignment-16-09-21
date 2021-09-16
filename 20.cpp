/*Write a program to input number from 
the user and calculate its factors*/
#include <iostream>
using namespace std;
main()
{
 int num,count=2;
 cout<<"Enter a Number: ";
cin>>num; 
 while(num>=1){
 if(num%count==0)
{
cout<<"count"<<" ";
num = num/count;
}
else
{
count ++;
}
}
}
