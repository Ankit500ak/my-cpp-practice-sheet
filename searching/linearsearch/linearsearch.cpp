#include <iostream>
using namespace std;

void linearsearch(int arr[],int target,int length)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==target)
        {
            cout<<"element found at : "<<i;
            break;
        }
    }
}
int main()
{
    int arr[100];
    int num;
    int target;
    cout<<"enter length of array";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be found ";
    cin>>target;
    linearsearch(arr,target,target);
    
}