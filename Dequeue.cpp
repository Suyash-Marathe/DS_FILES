#include <iostream>
#include <queue>
using namespace std;

int main () 
{
    queue<int> myQueue;

    myQueue.push(10);
    myQueue.push(20);

    int element;

    cout << "Element : " << myQueue.front();
    myQueue.pop();

}