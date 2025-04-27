#include <iostream>
using namespace std;

int main ()
{
    int arr[] = {10, 20, 30, 40, 50}, key;

    cout << "Enter number : ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Item found at " << i;
        }
    }

    cout << "Item not found.";

    return 0;
}