#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insert(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(int x) {
        Node *temp = head, *prev = NULL;

        if (temp != NULL && temp->data == x) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != NULL && temp->data != x) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Not found\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    void search(int x) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data == x) {
                cout << x << " found\n";
                return;
            }
            temp = temp->next;
        }

        cout << x << " not found\n";
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList l;

    l.insert(10);
    l.insert(20);
    l.insert(30);

    l.display();

    l.search(20);

    l.deleteNode(20);

    l.display();

    return 0;
}

/*
Time Complexity:
Insert -> O(1)
Delete -> O(n)
Search -> O(n)
*/