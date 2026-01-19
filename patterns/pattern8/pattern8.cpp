/*
123456
1    6
1    6
123456
*/
#include <iostream>
using namespace std;
int main()
{
    int num=0;
    cin>>num;

    for (int i=1;i<num-2;i++)
    {
        for(int j=1;j<num;j++)
        {
            if(i==1||i==num-3||j==1||j==num-1)
            {
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}