//Display cube of numbers from 0 to 100
#include <iostream>
using namespace std;
int main()
{
 int c, number=0;
 
 do{
 	c=number*number*number;
	 cout<<number<<"^"<<number<<"^"<<number<<"=" << c << endl;
	  number++;
 }
 	while(number<=100);
}
