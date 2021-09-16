/*Display cube of numbers between ranges selected 
range at runtime (e.g between 10 to 20)*/
#include <iostream>
using namespace std;
#define cube(a) (a*a*a)
int main()
{
 int i, range;
 cout << "input the number you want to start from: ";
 cin >> i;
cout << "till : ";
 cin >> range;


 while(i <= range )
 {

 cout << "Number is : " << i << " and the cube of " << i << " is: " 
 << cube(i)
<< endl;
 i++;
 }
}
