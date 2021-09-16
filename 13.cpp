//Display square of numbers from 500 to 1000
#include <iostream>
using namespace std;
int main()
{
 int s, number=500;
 
 do{
 	s=number*number;
	 cout<<number<<"^"<<number<<"=" << s << endl;
	  number++;
 }
 	while(number<=1000);
}
