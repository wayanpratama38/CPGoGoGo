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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy Linked List initial with 0
        ListNode* dummy = new ListNode(0);
        // Create a pointer
        ListNode* pointer = dummy;

        while(list1 && list2){
            if(list1->val <= list2->val){
                pointer->next = list1;
                list1 = list1->next;
            }else{
                pointer->next = list2;
                list2 = list2->next;
            }
            pointer = pointer->next;
        }
        pointer->next = list1 ? list1 : list2;
        return dummy->next;
    }
};