
/*
 2 |24|0
 2 |12|0
 2 |6 |0
 2 |3 |0
 2 |1 |1
   |1 |
*/ 
#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    
    int rem;
    int sum=0;
    int power=0;

    while(num>0)
    {
        //24
        rem=num%2;
        num=num/2;
        sum=sum+pow(10,power)*rem;
        power++;
        

    }
    cout<<sum;
    

}