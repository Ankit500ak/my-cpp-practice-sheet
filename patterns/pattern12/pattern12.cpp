
/*
   11
  1221
 123321
12344321

*/
#include <iostream>
using namespace std;
int main()
{
    int num;cin>>num;

    for (int i=1;i<num;i++)
    {
          for(int k=1;k<(num-i);k++)
          {
            cout<<" ";
          }
    for(int k=1;k<i;k++)
    {
        cout<<k;
    }
    for(int k=i-1;k>=1;k--)
    {
        cout<<k;
    }
 cout<<"\n";
        }
       
    }
