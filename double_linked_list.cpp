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