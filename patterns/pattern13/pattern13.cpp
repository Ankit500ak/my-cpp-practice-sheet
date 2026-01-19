#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            cout << " ";
        cout << i;
        if (i > 1)
        {
            for (int sp = 1; sp <= 2 * i - 3; sp++)
                cout << " ";
            cout << i;
        }
        cout << endl;
    }
    for (int i = 1; i <= 2 * n - 1; i++)
        cout << n;

    return 0;
}
