#include <iostream>
using namespace std;
int main()
{
    int a;
    int num;
    int arr[10];
    int max=0;
    cout<<"enter the length of array";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<"enter the element at position "<<i<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<num;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
    
}