//Display average of even numbers from 1000 to 1200
#include <iostream>
using namespace std;
main()
{
 int i,num,evenS=0,evenC=0;
 float Avg;
 num=1200;
 i=1000;
 while(i<=num){

 evenS=evenS+i;
 evenC++;
 i++;
 }
Avg=evenS/evenC;
cout<<"Average of even numbers are from 1000 to 1200: "<<Avg;
}
