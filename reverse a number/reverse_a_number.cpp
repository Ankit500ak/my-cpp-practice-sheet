#include<iostream>
using namespace std;
int main()
{
    int num;
    int rev=0;
    cin>>num;
    while(num>0)
    {
        rev=(rev*10)+num%10;
        num/=10;
    }
    cout<<rev;
}