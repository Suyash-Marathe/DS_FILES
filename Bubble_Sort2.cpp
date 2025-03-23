#include <iostream>
using namespace std;

void bSort (int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print (int arr[], int n)
{
    for (int i = 0; i< n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main ()
{
    int n = 5;
    int arr[] = {3, 5 ,2, 1, 4};

    bSort(arr, n);
    print(arr, n);  
}