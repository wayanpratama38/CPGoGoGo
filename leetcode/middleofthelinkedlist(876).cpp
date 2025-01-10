#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = nullptr;
    }
};

ListNode* middleNode(ListNode* head) {
    ListNode* current = head;
    int length = 0;
    while(current){
        length++;
        current = current->next;
    }

    current = head;
    if(length%2==0){
        for(int i = 0;i<(length/2);i++){
            current=current->next;
        }
    }else{
        for(int i = 0;i<(length/2);i++){
            current=current->next;
        }
    }
    return current;
    
}

int main(){
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    ListNode* middle = middleNode(head);
    cout<<middle->val;
}