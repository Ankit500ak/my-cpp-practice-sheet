#include<iostream>
using namespace std;
int main()
{
    int num;int sum;int temp;
    cin>>num;
    while(num!=0)
    {
        temp=num%10;
        sum+=temp;
        num=num/10;
    }
    cout<<sum;
}