#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    void search(int x) {
        for (int i = 0; i <= top; i++) {
            if (arr[i] == x) {
                cout << x << " found in stack\n";
                return;
            }
        }
        cout << x << " not found\n";
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }

        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.search(20);

    s.pop();

    s.display();

    return 0;
}

/*
Time Complexity:
Push   -> O(1)
Pop    -> O(1)
Search -> O(n)
*/