/*
12121
21212
12121
21212
*/
#include <iostream>
using namespace std;
int main()
{
    int num=0;
    cin>>num;

    for (int i=1;i<num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
    return 0;
}