#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3;

    cout <<"enter three number";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    num1>num2&&num2>num3?cout<<num1<<" is greater than "<<num2<<" and "<<num3 : num2>num3 && num3>num1?cout<<num2<<" is greater than "<<num3<<" and "<<num1:cout<<num3<<" is grater than "<<num1<<" and "<<num2;
}