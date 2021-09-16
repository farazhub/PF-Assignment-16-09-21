//Display Average of odd numbers from 1200 to 1000
#include <iostream>
using namespace std;
main()
{
 int i,num, oddS=0,oddC=0;
 float Avg;
i=1000;
 num=1200;
 while(i<=num){
 oddS=oddS+i;
 oddC++;
 i++; }
 Avg=oddS/oddC;
 cout<<"Average of odd numbers from 1200 to 1000 are: "<<Avg; 
}
