//Write a program to convert binary to decimal
#include<iostream>
using namespace std;
main()
{
int num, temp, rem, dec = 0, b = 1;
cout << "Enter Binary Number – ";
cin >> num;
temp >> num;
while (num > 0)
{
rem = temp % 10;
dec = dec + rem * 2;
b =b*2;
temp /= 10;
}
cout << "The decimal conversion of " << num << "is" << dec;
}
