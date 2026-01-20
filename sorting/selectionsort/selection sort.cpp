#include <iostream>
using namespace std;

void selection (int arr[],int length)
{
    
    for(int i=0;i<length;i++)
    {
        int min=i;
        
        for(int j=i+1;j<length;j++)
        {    
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main()
{
    int num;
    int length;
    int arr[10];

    cout<<"enter the length of array"<<endl;
    cin>>length;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    selection(arr,length);
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
}