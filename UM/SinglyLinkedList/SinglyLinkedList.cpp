// SinglyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node {
    Node* next;
    int data;
};

Node* createNode(int i) {
    Node* newNode = new Node;
    newNode->data = i;
    newNode->next = NULL;
    return newNode;
}

int main()
{

    // building a linked list
    cout << "Building a linked list" << endl;


    Node* head = NULL;
    Node* last = NULL;
    Node* newNode = new Node;
    for (int value = 1; value < 4; value++) {
        newNode = createNode(value);
        if (head == NULL) {
            head = newNode;
            last = newNode;
        }
        else {
            last->next = newNode;
            last = newNode; //shift last to newNode
        }
    }
    cout << "Last, after building: " << endl;
    cout << "Last->data = " << last->data << endl;
    cout << "Last->next =" << last->next << endl;

    //traverse list
    cout << "-----------------------------------------" << endl;
    cout << "traverse list" << endl;


    Node* current = new Node;
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    cout << "----------------------------------------------------" << endl;
    cout << "Insert node with data=5 at the beginning" << endl;

    //insert node before head
    Node* nodeFirst = createNode(5);
    nodeFirst->next = head;
    head = nodeFirst;

    //traverse list after inserting new Node before head
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;

    //insert after node with data=2
    //method 1
    cout << "-------------------------------------------------------" << endl;
    cout << "Insert node after node that has data = 2" << endl;
    cout << "Text book method: " << endl;

    newNode = createNode(7);
    Node* prev = head;

    while (prev->data != 2) {
        prev = prev->next;
    }

    newNode->next = prev->next;
    prev->next = newNode;

    //traverse list
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "Last->data = " << last->data << endl;
    cout << "Last->next =" << last->next << endl;
    cout << endl;


    //method 2
    cout << "My method: " << endl;
    newNode = createNode(10);
    current = head;
    Node* next = new Node;
    while (current->data != 2) {
        current = current->next;
        next = current->next;
        cout << "current->data = " << current->data << endl;
        cout << "current->next = " << current->next << endl;
        cout << "next->data = " << next->data << endl;
    }

    if (current->next == NULL) { //if current is actually the last node
        current->next = newNode;
        last = newNode;
    }
    else {
        current->next = newNode;
        newNode->next = next;
    }

    //traverse list
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "Last->data = " << last->data << endl;
    cout << "Last->next =" << last->next << endl;
    cout << endl;

    //insert after given node position
    cout << "-------------------------------------------------------" << endl;
    cout << "Insert node after position = 4" << endl;

    int pos = 4;
    newNode = createNode(15);
    current = head;
    for (int i = 0; i < pos - 1; i++) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    //traverse list
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "Last->data = " << last->data << endl;
    cout << "Last->next =" << last->next << endl;
    cout << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
