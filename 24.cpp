//Write a program to calculate Gcd from 2 numbers
#include <iostream>
using namespace std;
main() {
 int n1, n2;
 cout << "Enter two numbers: ";
 cin >> n1 >> n2;

 while(n1 != n2) {
 if(n1 > n2)
 n1 = n1 - n2;
 else
 n2 = n2 - n1;
 }
 cout << "GCD = " << n1;
 }
