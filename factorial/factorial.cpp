#include<iostream>
using namespace std;
int main()
{
    int num;
    int fac=1;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
        cout<<fac<<endl;
    }

}