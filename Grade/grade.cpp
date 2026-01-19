#include <iostream>
using namespace std;

int main()
{
    int score;
    cout<<"enter your percentage : ";
    cin>>score;

    if(score>=90)
    {
        cout<<"grade is : A+";
    }
    else if(score>=80 && score<90)
    {
        cout <<"grade is : A";
    }
    else if(score>=70 && score<80)
    {
        cout<<"grade is : B";
    }
    else if(score>=60 && score<70)
    {
        cout <<"grade is : C";
    }
    else if(score>=50 && score<60)
    {
        cout<<"grade is : D";
    }
    else if(score>=40 && score<50)
    {
        cout <<"grade is : E";
    }
    else
    {
        cout<<"Fail";
    }

}