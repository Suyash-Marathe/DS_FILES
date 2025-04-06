#include <iostream>
using namespace std;

int main ()
{
    int a[5] = {1, 2, 3, 4, 5}, e;

    cout << "Enter Item : ";
    cin >> e;

    for (int i=0; i < 5; i++)
    {
        if (e == a[i])
        {
            cout << "Found !";
        }
        else
        {
            cout << "Not Found !";
            break;
        }
    }
}