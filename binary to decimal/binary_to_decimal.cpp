/*
1010101
        2*2^1
*/

#include<iostream>
using namespace std;
int main()
{
 int bin=0;
 int rev;
 int val=0;
 int sum;
 cin>>bin;//100

 while(bin>0)
 {
    int temp=bin%10;
    sum+=temp*pow(2,val);
    bin=bin/10;
    val++;
 }
 cout<<sum;

}