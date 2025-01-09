#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int val){
        this->val = val;
        this->next = nullptr;
    }   
};

void printLinkedList(ListNode* head){
    ListNode* current = head;
    while(current!=nullptr){
        
        cout<<current->val;
        if(current->next != nullptr){
            cout<<" -> ";
        }
        current = current->next;
    }
}

ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* current = head;
    while(current){
        ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    printLinkedList(prev);
    return prev;
}

void addAtEnd(ListNode* head,int data){
    ListNode* newNode = new ListNode(data);
    if(head == nullptr){
        head = newNode;
    }else{
        ListNode* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = newNode;
    }
}



int main(){
    ListNode* head = new ListNode(1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    reverseList(head);
}