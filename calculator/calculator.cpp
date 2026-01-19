#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char ch;
    cout <<"enter first variable : ";
    cin>>a;
    cout <<"enter second variable : ";
    cin >>b;
    cout<<"enter the operator(+,-,\,%,^)";
    cin>>ch;

   ch == '+'? (cout << "sum is : " << a + b): ch == '-'? (cout << "sub is : " << a - b): ch == '/'? (cout << "div is : " << a / b): ch == '*'? (cout << "multiply is : " << a * b): ch == '%'? (cout << "mod is : " << a % b): ch == '^'? (cout << "pow is : " << pow(a, b)): cout << "wrong choice";
}