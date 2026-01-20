#include<iostream>
using namespace std;
void bubble(int arr[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
}
}
int main()
{
    int num;
    int arr[10];
    cout<<"enter the numeber of elments"<<endl;
    cin>>num;
    cout<<"enter the elements of the array"<<endl;
    for(int a=0;a<num;a++)
    {
        cin>>arr[a];
    }
    bubble(arr,num);
    cout<<"sorted array : "<<endl;
    for(int a=0;a<num;a++)
    {
        cout<<arr[a]<<endl;
    }
}