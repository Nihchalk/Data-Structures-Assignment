#include <iostream>
using namespace std;

void push(int& top, int stack[], int n) {
    cout << "Enter number of elements you want to insert: ";
    int p;
    cin >> p;

    if (p > n - top - 1) { // Check remaining space
        cout << "Not enough space to insert " << p << " elements\n";
    } else {
        for (int i = 0; i < p; i++) {
            int value;
            cout << "Enter element " << i + 1 << ": ";
            cin >> value;
            top++;
            stack[top] = value;
        }
    }
}


void pop(int& top, int stack[]) {
    if (top == -1) {
        cout << "Stack is empty, cannot pop\n";
    } else {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}

void peek(int& top, int stack[]) {
    if (top == -1) cout << "Stack is empty\n";
    else cout << "Top element: " << stack[top] << endl;
}

// Check if stack is full
void isFull(int& top, int n) {
    if (top == n - 1) cout << "Stack is full\n";
    else cout << "You can insert " << n - top - 1 << " more elements\n";
}

// Check if stack is empty
void isEmpty(int& top) {
    if (top == -1) cout << "Stack is empty\n";
    else cout << "Stack is not empty\n";
}

void display(int& top, int stack[]) {
    if (top == -1) cout << "Stack is empty\n";
    else {
        cout << "Stack elements (top to bottom):\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter size of stack: ";
    cin >> n;
    int stack[n];
    int top = -1;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Check if Full\n5. Check if Empty\n6. Display\n7. Exit\n";
        cout << "Enter your choice: ";
        int ch;
        cin >> ch;

        switch(ch) {
            case 1: push(top, stack, n); break;
            case 2: pop(top, stack); break;
            case 3: peek(top, stack); break;
            case 4: isFull(top, n); break;
            case 5: isEmpty(top); break;
            case 6: display(top, stack); break;
            case 7: exit(0);
            default: cout << "Invalid choice\n";
        }
    }
}
