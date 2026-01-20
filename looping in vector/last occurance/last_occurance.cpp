#include<iostream>
using namespace std;
#include <vector>
int main()
{
    int x;
    int occurance = -1;
    vector <int> v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }
    cout<<"enter x";
    cin>>x;

    for(int i=0;i<6;i++)
    {
        if(v[i]==x)
        {
            occurance=i;
        }

    }
    cout<<occurance<<endl;
    return 0; 
}