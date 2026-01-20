#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v;

    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;

        v.push_back(element);
    }
    v.erase(v.end()-2);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,6);
    // while
    int idx=0;
    while(idx<v.size())
{
    cout<<v[idx++]<<" ";
}
}