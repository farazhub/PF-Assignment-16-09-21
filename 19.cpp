/*Write a program to input number from the user 
and print the table using while*/
#include<iostream>
using namespace std;
 main()
{
 int n,count=1;
 cout<<"Enter number =";
 cin>>n;
 while(count<=10)
 {
 cout<<n<<"*"<<count<<"= "<<n*count<<endl;
 count++;
 }
}
