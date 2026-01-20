/*
vectors are resizeable arrays that can store elements of a specified type.
 They provide dynamic memory management and various member functions to manipulate the stored data.
*/

#include<iostream>
using namespace std;
#include <vector>

int main()
{
    vector <int> card;
    cout<<"Size of Array : "<<card.size()<<endl;
    cout<<"Capacity of Array : "<<card.capacity()<<endl;
    cout<<endl;
    card.push_back(5);
    cout<<"Size of Array :  "<<card.size()<<endl;
    cout<<"Capacity of Array : "<<card.capacity()<<endl;
    cout<<endl;
    card.push_back(2);
    cout<<"Size of Array : "<<card.size()<<endl;
    cout<<"Capacity of Array : "<<card.capacity()<<endl;
    cout<<endl;
    card.push_back(1);
    cout<<"Size of Array : "<<card.size()<<endl;
    cout<<"Capacity of Array : "<<card.capacity()<<endl;
    cout<<endl;
    card.resize(10);
    card.pop_back();
    cout<<"Size of Array : "<<card.size()<<endl;
    cout<<"Capacity of Array : "<<card.capacity()<<endl;



    
}
