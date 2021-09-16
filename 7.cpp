//Display square of numbers from 0 to 100
#include <iostream>
using namespace std;
int main()
{
 int s, number=0;
 
 do{
 	s=number*number;
	 cout<<number<<"^"<<number<<"=" << s << endl;
	  number++;
 }
 	while(number<=100);
}
