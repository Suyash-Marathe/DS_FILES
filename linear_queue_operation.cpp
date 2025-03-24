#include <iostream>
using namespace std;

#define SIZE 5  // Define the maximum size of the queue

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Insert an element into the queue
    void insert(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1) {
            front = 0;  // Set front to first index on first insertion
        }
        arr[++rear] = value;
        cout << value << " inserted into the queue." << endl;
    }

    // Delete an element from the queue
    void remove() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! No elements to delete." << endl;
            return;
        }
        cout << "Deleted: " << arr[front] << endl;
        front++;  // Move front to the next element
    }

    // Display the elements in the queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n1. Insert  2. Delete  3. Display  4. Exit\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            q.insert(value);
            break;
        case 2:
            q.remove();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid Choice! Try again." << endl;
        }
    }

    return 0;
}