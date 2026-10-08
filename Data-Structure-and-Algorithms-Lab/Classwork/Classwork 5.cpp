#include <iostream>
#include <string>
using namespace std;

struct node {
    string book;
    node* next;
};

node* top = NULL;


void push(string bookName) {
    node* newNode = new node;

    newNode->book = bookName;
    newNode->next = top;
    top = newNode;

    cout << "Book pushed successfully!" << endl;
}


void pop() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }

    node* temp = top;

    cout << "Removed book: " << top->book << endl;

    top = top->next;

    delete temp;
}


void peek() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }

    cout << "Top book: " << top->book << endl;
}


void display() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }

    node* temp = top;

    cout << "\nBooks in stack:" << endl;

    while (temp != NULL) {
        cout << temp->book << endl;
        temp = temp->next;
    }
}


void isEmpty() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
    }
    else {
        cout << "Stack is not empty." << endl;
    }
}

int main() {

    int choice;
    string bookName;

    do {
        cout << "\ BOOK STACK" << endl;
        cout << "1. Push book" << endl;
        cout << "2. Pop book" << endl;
        cout << "3. Peek top book" << endl;
        cout << "4. Display stack" << endl;
        cout << "5. Check empty" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter book name: ";
                cin.ignore();
                getline(cin, bookName);

                push(bookName);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                isEmpty();
                break;

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}

