#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector <int> arr = {10, 20, 30};

    arr.push_back(40);
    
    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;

    arr.insert(arr.begin(), 5);

    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;

    arr.erase(arr.begin());
    arr.pop_back();

    for (int x : arr)
    {
        cout << x << " ";
    }
}