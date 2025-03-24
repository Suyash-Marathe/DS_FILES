#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
    int arr[SIZE], top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == SIZE - 1) cout << "Stack Overflow\n";
        else arr[++top] = x, cout << x << " pushed\n";
    }

    void pop() {
        if (top == -1) cout << "Stack Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }

    void display() {
        if (top == -1) cout << "Stack is Empty\n";
        else for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack st;
    int ch, val;
    while (true) {
        cout << "\n1.Push 2.Pop 3.Display 4.Exit: ";
        cin >> ch;
        if (ch == 1) cin >> val, st.push(val);
        else if (ch == 2) st.pop();
        else if (ch == 3) st.display();
        else break;
    }
    return 0;
}