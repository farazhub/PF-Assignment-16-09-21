//Write a program to input base and power from the user and calculate the result
#include <iostream>
using namespace std;
main()
{
 int power;
 float base, result = 1;
 cout << "Enter base: ";
 cin >> base;
 cout << "Enter power: ";
 cin >> power;
 cout << base << "^" << power << " = ";
 while (power != 0) {
 result = result * base;
 --power;
 }
 cout << result;
}

