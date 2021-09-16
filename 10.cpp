//Display cube of numbers from 100 to 0
#include <iostream>
using namespace std;
int main()
{
 int c, number=100;
 
 do{
 	c=number*number;
	 cout<<number<<"^"<<number<<"^"<<number<<"=" << c << endl;
	  number--;
 }
 	while(number>=0);
}
