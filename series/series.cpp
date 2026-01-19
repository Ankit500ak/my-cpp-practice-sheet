#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum;
    cin>>num;

    for(int i=1;i<num;i++)
    {
        i%2==0?sum+=i:sum-=i;
    }
    cout<<sum;
}