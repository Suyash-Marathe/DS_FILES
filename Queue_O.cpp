#include <iostream>
using namespace std;

int main ()
{
    int queue[3] = {10, 20, 30};
    int front = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << queue[i] << endl;
    }

    for (int i = 1; i < 3; i++)
    {
        cout << queue[i] << endl;
    }

    return 0;

}