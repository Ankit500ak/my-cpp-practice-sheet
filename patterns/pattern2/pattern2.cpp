/*

****
*  *
*  *
****
(00)(01)(02)(03)
(10)(  )(  )(14)
(20)(  )(  )(24)
(30)(31)(32)(33)



*/

#include <iostream>
using namespace std;
int main()
{
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==0||i==3||j==0||j==3)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}