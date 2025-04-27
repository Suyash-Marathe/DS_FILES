#include <iostream>
using namespace std;

int main ()
{
    int stack[3];
    int top = -1;

    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    for (int i = 0; i < 3; i++) 
    {
        cout << stack[i] << endl;
    }

    top--;

    for (int i = 0; i <= top; i++) 
    {
        cout << stack[i] << endl;
    }

    return 0;
}