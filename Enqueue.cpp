#include <iostream>
#include <queue>
using namespace std;

int main () 
{
    queue<int> myQueue;
    
    int element;

    cout << "Enter Element : ";
    cin >> element;

    myQueue.push(element);

    cout << "Elements : " << element;

    return 0;
}