#include <iostream>
using namespace std;

int main()
{
    int cp;
    int sp;
    cout<<"enter cost price : ";
    cin>>cp;
    cout<<"enter selling price : ";
    cin>>sp;

    cp>sp?cout<<"loss of : "<<cp-sp:cout<<"profit of : "<<sp-cp;
}