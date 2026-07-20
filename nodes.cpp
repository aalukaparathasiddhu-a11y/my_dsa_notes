#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convarr2ll(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover =head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
int main(){
    vector<int> arr={2,1,3,8};


Node* head=convarr2ll(arr);
Node* temp=head;
int lenght=0;
while(temp){
    lenght++;
cout<< temp->data<<endl;
temp=temp->next;
}
cout<<"lenght is "<<lenght<<endl;




int val=3;
//search in linked list
temp=head;
while(temp){
    if(temp->data==val) {
        cout<<"true"<<endl;
        break;
    }
    temp=temp->next;
}



}