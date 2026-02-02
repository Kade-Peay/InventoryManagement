#include "linkedlist.hpp"

Node* head;

LinkedList::LinkedList() : head(nullptr) {}

// Add a new node to the front 
void LinkedList::addFront(int data) 
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}


void LinkedList::printList() 
{
    Node* current = head; 
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
} 

