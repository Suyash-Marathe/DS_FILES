#include<iostream>
using namespace std;

int main ()
{
    int l=0, m, u=4, e, i, f = 0;

    int a[5] = {1, 2, 3, 4, 5};

    cout << "Enter Item : ";
    cin >> e;

    while (l <= u)
    {
        m = (l + u) / 2;

        if (a[m] == e)
        {
           f = 1;
            break;
        }

        if (a[m] < e)
        l = (m + 1);
        else
        u = (m - 1);
    }

    if (f == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}