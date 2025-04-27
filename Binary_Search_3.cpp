#include <iostream>
using namespace std;

int main ()
{
    int arr[] = {10, 20, 30, 40, 50}, key;
    int lr = 0, up = 4;

    cout << "Enter number : ";
    cin >> key;

    while (lr <= up)
    {
        int mid = (lr + up) / 2;

        if (arr[mid] == key)
        {
            cout << "Item found at " << mid;
            break;
        }
        else if (arr[mid] < key)
        {
            lr++;
        }
        else
        {
            up--;
        }
    }

    cout << "Item not found.";

    return 0;
}