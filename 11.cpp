//Display square of numbers from 40 to 100
#include <iostream>
using namespace std;
int main()
{
 int s, number=40;
 
 do{
 	s=number*number;
	 cout<<number<<"^"<<number<<"=" << s << endl;
	  number++;
 }
 	while(number<=100);
}
