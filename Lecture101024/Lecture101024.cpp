// Lecture101024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

//tmp = temporary. Creating a temporary pointer called tmpHead. So tmpHead = head. 
void initNode(Node* tmpHead, int n) {
    tmpHead->data = n;
    tmpHead->next = NULL;
}

void displayList(Node* cur) {
    while (cur != NULL) {
        std::cout << cur->data << " ";
        cur = cur->next;
    }
    std::cout << std::endl;
}

void addNode(Node* cur, int n) {
    while (cur->next != NULL) {
        cur = cur->next;
    }
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    cur->next = newNode;
}

void addFront(Node** tmpHead, int n) {
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = *tmpHead;
    *tmpHead = newNode;
}

int main()
{
    Node* head = new Node;
    head->data = 22;
    head->next = NULL;

    //Another list

    Node* head2 = new Node;
    initNode(head2, 22);

    addNode(head, 33);

    displayList(head);

    int n = 11; // Define the variable n
    addFront(&head, n);

    displayList(head); // Display the list again to see the changes

    return 0;

    //Instead of writing it again and again, we can create a function instead. See initNode!!

    //First: create a cur.  Second step: using a while-loop. Third step: create a new node. Then assign the value to the new node. Lastly, assign the new node to the next of the current node.
    // Whenever you need to create a new node, its the same piece of code.
    //If you understand the logic behind you can change the order of the steps. 
    //Single pointer cannot point to another single pointer.
}
