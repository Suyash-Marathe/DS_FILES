#include <iostream>
using namespace std;

int main ()
{
    int arr[] = {20, 50, 10, 30, 40};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << endl;
    }

    return 0;
}
