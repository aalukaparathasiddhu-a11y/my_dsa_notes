#include<bits/stdc++.h>
using namespace std;
//manually defining stack using array
/*
int st[100];
int tope = -1;
void push(int x){
    tope=tope++;
    st[tope]=x;
}
int top(){
    if(tope==-1) return -1;
    return st[tope];
}
void pop(){
    if(tope==-1)return;
    tope=tope-1;
}
    */
//implementing queue using array
// Class implementing Queue using Arrays
class ArrayQueue {
    // Array to store queue elements
    int* arr;
    // Indices for start and end of the queue
    int start, end;
    // Current size and maximum size of the queue
    int currSize, maxSize;

public:
    // Constructor
    ArrayQueue() {
        arr = new int[10];
        start = -1;
        end = -1;
        currSize = 0;
        maxSize = 10;
    }

    // Method to push an element into the queue
    void push(int x) {
        // Check if the queue is full
        if (currSize == maxSize) {
            cout << "Queue is full\nExiting..." << endl;
            exit(1);
        }
        
        // If the queue is empty, initialize start and end
        if (end == -1) {
            start = 0;
            end = 0;
        } 
        else {
            // Circular increment of end
            end = (end + 1) % maxSize;
        }
            
        arr[end] = x;
        currSize++;
    }

    // Method to pop an element from the queue
    int pop() {
        // Check if the queue is empty
        if (start == -1) {
            cout << "Queue Empty\nExiting..." << endl;
            exit(1);
        }
        int popped = arr[start];
        
        // If the queue has only one element, reset start and end
        if (currSize == 1) {
            start = -1;
            end = -1;
        }
        else {
            // Circular increment of start
            start = (start + 1) % maxSize;
        }
        
        currSize--;
        return popped;
    }

    // Method to get the front element of the queue
    int peek() {
        // Check if the queue is empty
        if (start == -1) {
            cout << "Queue is Empty" << endl;
            exit(1);
        }
        return arr[start];
    }

    // Method to determine whether the queue is empty
    bool isEmpty() {
        return (currSize == 0);
    }
};
 
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
//implementing stack using linked list
/*
int size=0;
   
Node* top=nullptr;
void push(int x){
    Node* temp=new Node(x);
    temp->next=top;
    top=temp;
    size++;
}
int peek(){
    if(top==nullptr) exit(1);
    return top->data;
}
void pop(){
    if(size==0)return;
    Node* temp=top;
    top=top->next;
    delete temp;
    size--;
}
    */


//implementing queue using lL
/*
Node *start=nullptr;
Node *last=nullptr;
int size=0;
void push(int x){
   Node* temp=new Node(x);
    if(size==0){
        start=temp;
        last=temp;
        size++;
    return;
}
    last->next=temp;
last=temp;
size++;
}

void pop(){
   
    if(size==0)exit(1);
 Node* temp=start;
    start=start->next;
    delete temp;
    size--;
    if(size==0){
        last=nullptr;
    }
}
int top(){
    if(size==0) exit(1);
    return start->data;
}
*/

//implement stack using queue
//push is same
/*
class st{
    queue<int>q;
    void qpush(int x){
        int s=q.size();
        q.push(x);
        for(int i=1;i<=s;i++){
            q.push(q.top());
            q.pop();
        }
    }
    void qpop(){
        q.pop();
    }
    int qtop{
        return q.top();
    }

} */
//implement queue using stack
stack<int>s1,s2;

void push(int x){
    if(s1.size()==0){
        s1.push(x);
    return;    
    }
    while(s1.size()!=0){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(s2.size()!=0){
        s1.push(s2.top());
        s2.pop();
    }
}
int front(){
return s1.top();
}
void pop(){
    if(s1.size()==0)exit(-1);
s1.pop();
}

