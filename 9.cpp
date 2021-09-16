//Display square of numbers from 100 to 0
#include <iostream>
using namespace std;
int main()
{
 int s, number=100;
 
 do{
 	s=number*number;
	 cout<<number<<"^"<<number<<"=" << s << endl;
	  number--;
 }
 	while(number>=0);
}
