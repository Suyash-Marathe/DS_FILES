#include <iostream>
using namespace std;

int main ()
{
    int arr[] = {20, 40, 50, 30, 10};

    for (int i = 0; i < 4; i++)
    {
        int mid = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[mid])
            {
                mid = j;
            }
        }

        swap(arr[mid], arr[i]);
    }

    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << endl;
    }
}