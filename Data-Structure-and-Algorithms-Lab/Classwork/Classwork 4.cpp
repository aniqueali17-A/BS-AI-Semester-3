#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* top = NULL;

void push(int value) {
    node* newNode = new node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    node* temp = top;
    cout << "Removed: " << top->data << endl;
    top = top->next;

    delete temp;
}

void display() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    node* temp = top;

    cout << "Stack elements:" << endl;

    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    pop();

    display();

    return 0;
}
