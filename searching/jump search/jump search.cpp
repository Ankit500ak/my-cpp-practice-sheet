#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void sort(int arr[],int length)
{
     for(int i = 0; i < length - 1; i++)
    {
        for(int j = 0; j < length - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int jumpsearch(int arr[],int target,int size)
{
    int jump=sqrt(size);
    int prev=0;
    while(arr[min(jump,size)-1]<target)
    {
        prev=jump;
        jump=jump+sqrt(size);
        if(prev>=jump)
        {
            return -1;
        }
    }
    for(int i=prev;i<min(jump,size);i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10];
    int num;
    int a;
    int target;
    int length;
    cout<<"enter the length of array"<<endl;
    cin>>length;
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be found"<<endl;
    cin>>target;
    sort(arr, length);
    cout << "sorted array : "<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"element found at "<<jumpsearch(arr,target,length)<<endl;
    
}