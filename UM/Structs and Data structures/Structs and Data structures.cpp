// Structs and Data structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    //void newNode();
    Node* newNode(int value) {



        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        return newNode;
    }
};

//void Node::newNode() {
//    Node nextNode;
//
//}

struct Node {
    int data;
    Node* next;
};



int main()
{
    //initializing all nodes to NULL;
    //Node* head = NULL;
    //Node* second = NULL;
    //Node* third = NULL;

    //head = new Node;
    //second = new Node;
    //third = new Node;

    //head->data = 1;
    //head->next = second; //why doesn't it point to the address of second instead? Because second IS an address
    //second->data = 2;
    //second->next = third;
    //third->data = 3;
    //third->next = NULL;
    //

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;



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
