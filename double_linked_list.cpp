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
/*
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
*/

//find pair equal to sum
vector<int> pairtosum(Node* head,int target){
Node* left=head,*right=head;
while(right->next!=nullptr){
right=right->next;
}
while(left->data<right->data){
    if(left->data+right->data==target) return{left->data,right->data};
    else if(left->data+right->data<target)left=left->next;
    else right=right->prev;
}
return {-1,-1};
}

//delete duplicate in sorted dll
Node* deleteduplicate(Node *head){
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* dummy=new Node(0);
    dummy->next=head;
    head->prev=dummy;
    Node* temp=head;
    while(temp!=nullptr && temp->next!=nullptr){
        if(temp->data==temp->next->data){
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
Node* todel=temp;
temp=temp->next;
delete todel;
        }
        else temp=temp->next;
    }
    Node *ans=dummy->next;
    if(ans!=nullptr)ans->prev=nullptr;
    delete dummy;
return ans;
}