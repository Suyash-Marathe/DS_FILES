#include <iostream>
using namespace std;

void ssort (int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int si = i;
        for (int j = i + 1; j < n; j++)
        { 
            if (arr[j] < arr[si])
            {
                si = j;
            }
        }

        swap(arr[i], arr[si]);
    }
}

void print (int arr[],int n)
{
    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main ()
{
    int n = 5;
    int arr[] = {4, 1, 2, 3, 5};

    ssort(arr, n);
    print(arr, n);

    return 0;
}