#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node* prev;

    Node(char val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    void insertAtEnd(char val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Doubly Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    bool isPalindrome() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return false;
        }

        Node* start = head;
        Node* end = head;

        // move to last node
        while (end->next != NULL)
            end = end->next;

        // compare characters from both ends
        while (start != end && end->next != start) {
            if (start->data != end->data)
                return false;
            start = start->next;
            end = end->prev;
        }
        return true;
    }
};

int main() {
    DoublyLinkedList list;
    int choice;
    char val;

    do {
        cout << "\n1. Insert Character at End";
        cout << "\n2. Display List";
        cout << "\n3. Check Palindrome";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter character: ";
            cin >> val;
            list.insertAtEnd(val);
            break;
        case 2:
            list.display();
            break;
        case 3:
            if (list.isPalindrome())
                cout << "The doubly linked list is a PALINDROME.\n";
            else
                cout << "The doubly linked list is NOT a palindrome.\n";
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
