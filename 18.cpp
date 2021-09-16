//Write a program to find max from 5 numbers using while
#include <iostream>
using namespace std;
main()
{
int count = 0;
int n = 0;
int max = 0;
cout << " Enter up to 5 numbers : ";
while (count <= 10)
{
 cout << "Number: ";
 cin >> n;
 count++;
 if (n > max)
 {
 max = n;
 }
 else if (count == 5)
 {
 cout << "The largest number was: " << n;
 break;
 }
}
}

