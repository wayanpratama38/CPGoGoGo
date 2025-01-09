#include <bits/stdc++.h>
using namespace std;

// This how to make a simple linked list
struct Node{
    // This is the data
    int data;
    // This is the pointer to the next node
    Node* next;
    // This is the constructor of the Node struc. 
    // It will initialize the data and next to nullptr
    Node(int data){
        // Assign current data.
        this->data = data;
        // Assign nullptr to the next node
        this->next = nullptr;
    }
};

Node* createSimpleLinkedList(){
    // Generate a node with Struct Node.
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    // Assign the current node to the next node
    first->next = second;
    second->next = third;

    // Return the head node
    return first;
}

Node* addAtBeginning(Node* head, int data){
    // Adding a new node at the beginning of the linked list
    Node* newNode = new Node(data);

    // Assign the next of the new node to the current head
    newNode->next = head;

    // Return the new node we make as the new head
    return newNode;
}

Node* addAtEnd(Node* head, int data){
    // Create a new node
    Node* newNode = new Node(data);

    // Checking if the current head is empty
    if(head == nullptr){
        // If empty then assign new node into the head
        // And return the head
        head = newNode;
    }else{
        // If not empty we transverse the linked list
        Node* current = head;
        // Tranverse until the next node is nullptr
        while(current->next != nullptr){
            current = current->next;
        }
        // We assign the new node to the next of the current node 
        current->next = newNode;
    }   

    // Return the head
    return head;
}

void printLinkedList(Node* head){
    // Assign head to the current node in order to traverse the linked list
    Node* current = head;

    // While the current node is not nullptr then we tranverse the linked list
    while(current != nullptr){
        // Console log the data of the current node
        cout<<current->data;
        
        // If the next node is not nullptr we put the "->" symbol
        if(current->next != nullptr){
            cout<<" -> ";
        }
        
        // Update the current to the next node
        current = current->next;
    }
    cout<<endl;
}



int main(){
    // Calling a function to create a simple linked list
    Node* head = createSimpleLinkedList();
    // Calling a function to add at beginning of the existing linked list
    Node* newHead = addAtBeginning(head,0);

    // Print the linked list
    printLinkedList(newHead);
}