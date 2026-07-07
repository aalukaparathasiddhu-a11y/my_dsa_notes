#include<bits/stdc++.h>
using namespace std;
//getting ready with double linked list
//next as well as previous
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val){
    data=val;
    next=nullptr;
    prev=nullptr;
    }
};
//deleting a node
void deletenode(Node* element){
    element->prev->next=element->next;
element->next->prev=element->prev;
delete element;
return;
}
//reversing a double linked list
Node* reversedll(Node* head){
    if(head==nullptr ||head->next==nullptr)return head;
    Node* current=head;
    Node* temp=nullptr;
    while(current!=nullptr){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
current=current->prev;
    }
    if(temp!=nullptr)head=temp->prev;
    return head;
}
//delete occurence
class Solution {
public:
    ListNode * deleteAllOccurrences(ListNode* head, int target) {
if(head==nullptr)return nullptr;
ListNode* dummy=new ListNode(0,head,nullptr);
head->prev=dummy;

ListNode* temp=head;
while(temp!=nullptr){
   
    if(temp->val==target){
         ListNode* du=temp;
         temp->prev->next=temp->next;
        if(temp->next)temp->next->prev=temp->prev;
        
        temp=temp->next;
        delete du;

    }
    else temp=temp->next;
    
}
ListNode* newHead = dummy->next;
        if (newHead != nullptr) {
            newHead->prev = nullptr; // Detach dummy
        }
        
        delete dummy; 
        return newHead;
    }
};