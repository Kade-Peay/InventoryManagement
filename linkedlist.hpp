#pragma once 
#include <iostream>

class Node 
{
public: 
    int data;
    Node*next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList 
{
private:
    Node* head;
public:
    LinkedList();
    void addFront(int data);
    void printList();
};
