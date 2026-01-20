#include<iostream>
using namespace std;

void sorting(int arr[],int num)
{
    for(int i = 0; i < num - 1; i++)
    {
        for(int j = 0; j < num - i - 1; j++)
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

int binarysearch(int arr[],int num,int target)
{
    int left =0;
    int right=num-1;
   
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target<arr[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}
int main()
{
    int num=0;
    int arr[10];
    int target;
    cout<<"enter the length of array"<<endl;
    cin>>num;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    sorting(arr,num);
    cout<<"enter the element to be found"<<endl;
    cin>>target;
    cout<<"sorted array"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"element found at : "<<binarysearch(arr,num,target)<<"in the sorted version of the array"<<endl;
}