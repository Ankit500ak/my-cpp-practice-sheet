/*
123456
123456
123456
123456
*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i=1;i<num-2;i++)
    {
        for(int j=1;j<num;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}