#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;

    int choice;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;

    cout<<"enter 1 for using temp variable"<<endl<<"enter 2 for no temp variable";
    cin>>choice;

    if (choice ==1)
    {
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
    else if(choice ==2)
    {
        num1=num1+num2; //3+4=7
        num2=num1-num2;     //7-4 =3
        num1=num1-num2;
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
}