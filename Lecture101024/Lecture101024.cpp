// Lecture101024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

};

//tmp = temporary. Creating a temporary pointer called tmpHead. So tmpHead = head. 
void initNode(Node *tmpHead, int n){
    tmpHead->data = n;
    tmpHead->next = NULL;
}


int main()
{
    Node* head = new Node;
    head->data = 22;
    head->next = NULL;

    //Another list

    Node* head2 = new Node;
    initNode(head, 22);

    return 0;



    //Instead of writing it again and again, we can create a function instead. See initNode!!

   

}


