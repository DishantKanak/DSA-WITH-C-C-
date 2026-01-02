#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void append(int data) {
        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insert_at_beginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool search(int key) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void delete_node(int key) {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node deleted." << endl;
            return;
        }

        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL && curr->data != key) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == NULL) {
            cout << "Value not found." << endl;
            return;
        }

        prev->next = curr->next;
        delete curr;
        cout << "Node deleted." << endl;
    }

    void reverse() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main() {
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);
    cout << "Initial list: ";
    list.display();

    list.insert_at_beginning(5);
    cout << "After inserting at beginning: ";
    list.display();

    int key = 20;
    if (list.search(key))
        cout << key << " found in list." << endl;
    else
        cout << key << " not found in list." << endl;

    list.delete_node(10);
    cout << "After deletion: ";
    list.display();

    list.reverse();
    cout << "After reversing: ";
    list.display();

    return 0;
}