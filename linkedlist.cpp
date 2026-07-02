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

//inserting element in linked list