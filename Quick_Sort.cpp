#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                swap(arr[++i], arr[j]);
            }
        }
        swap(arr[++i], arr[high]);

        quickSort(arr, low, i - 1);
        quickSort(arr, i + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}