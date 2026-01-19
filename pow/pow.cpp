#include<iostream>
using namespace std;
int main()
{
    int a;//5
    int b;//4
    int res=1;
    cin>>a;
    cin>>b;


    for(int i=1;i<=b;i++)
    {
        res*=a;
    }
    cout<<res;
}