#include<bits/stdc++.h>
using namespace std;


//initializing linked list
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;//a new node point to nullptr
    }
};

//traversing linked list
void printlist(Node* head){
    Node* temp=head;//starting with head
    while(temp!=nullptr){
        cout<< temp->data << "->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//searching for element
bool searchele(Node* head,int target){
    Node* temp=head;
    while(temp!= nullptr){
        if(temp->data==target)return true;
        temp=temp->next;
    }
    return false;
}

//inserting element in linked list at begining
Node* insertatbegin(Node* head,int new_ele){
    Node* newnode= new Node(new_ele);//pointing nullptr
newnode->next=head;
head=newnode;
return head;//returns head of new linked list
}

//inserting new element at end
Node* insertatend(Node* head,int val){
    Node*newnode=new Node(val);
    Node* temp=head;
    while(temp->next!=nullptr)temp=temp->next;
    temp->next=newnode;
    return head;
}

//inserting value at index
Node* insertati(Node* head,int val,int ind){
    Node*temp=head;
    Node* newnode=new Node(val);
    for(int i=0;i<ind && temp!=nullptr;i++){
temp=temp->next;
    }
    if (temp==nullptr) {
        delete newnode;
    return head;
}
newnode->next=temp->next;
temp->next=newnode;
return head;
}

//deleting first element
Node* deletehead(Node* head){
    if(head==nullptr)return nullptr;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

//deleting from middle
Node* deleteNode(Node* head, int target) {
    if (head == nullptr) return nullptr;
    if (head->data == target) return deletehead(head);

    Node* temp = head;
    // Find the node BEFORE the target node
    while (temp->next != nullptr && temp->next->data != target) {
        temp = temp->next;
    }

    // If target was found
    if (temp->next != nullptr) {
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next; // Link past the deleted node
        delete nodeToDelete;
    }
    return head;
}