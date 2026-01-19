/*
  1 2 3 4    spaces        stars
1    *           3          1     2*1-1  
2   ***          2          3     2*2-1
3  *****         1          5     2*3-1
4 *******        0          7     2*4-1

*/

#include <iostream>
using namespace std;
int main()
{
    int num=0;cin>>num;
    for(int i=1;i<num;i++)
    {
        for(int j=1;j<(num-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=((2*i)-1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}