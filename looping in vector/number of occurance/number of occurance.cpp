#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    int num;
    vector<int>x(6);
    int count=0;
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<6;i++)
    {
        cin>>x[i];
    }
    cout<<"enter the number to find occurance"<<endl;
    cin>>num;
    for(int i=0;i<6;i++)
    {
        if(x[i]==num)
        {
            count++;
        }
    }
    cout<<"number of occurance is : "<<count<<endl;
    return 0;

}