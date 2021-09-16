//Display cube of numbers from 1000 to 1500
#include <iostream>
using namespace std;
int main()
{
 int c, number=1000;
 
 do{
 	c=number*number*number;
	 cout<<number<<"^"<<number<<"^"<<number<<"=" << c << endl;
	  number++;
 }
 	while(number<=1500);
}
