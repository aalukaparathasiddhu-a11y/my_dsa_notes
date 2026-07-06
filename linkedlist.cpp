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

//reversing a linked list
Node* revll(Node* head){
    Node* temp=head;
    stack<int> st;
    while(temp!=nullptr){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;

}


Node*revell(Node* head){
Node* temp=head,*front=head->next,*prev=nullptr;
while(temp!=nullptr){
front=temp->next;
temp->next=prev;
prev=temp;
temp=front;

}

}

//detecting cycle in linked list nd detecting starting point
 Node *detectCycle(Node *head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        
        Node* slow = head;
        Node* fast = head;
        bool hasCycle = false;
        
        // Step 1: Determine if a cycle exists
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }
        
        // If we exited the loop and found no cycle, return nullptr
        if (!hasCycle) return nullptr;
        
        // Step 2: Find the entry point of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next; // Both move at the same speed now
        }
        
        return slow;
    }

    //finding lenght of cycle in ll
    int lenght(Node*head){
Node* temp=detectCycle(head);
if(temp==nullptr)return 0;
Node* moving=temp->next;
int count =1;
while(moving!=temp){
    moving=moving->next;
    count++;
}
return count;
    }

    //palindrome--O(n)S(n)
bool ispali(Node* head){
    stack<int>st;
    Node* temp=head;
    while(temp!=nullptr){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        if(temp->data!=st.top())return false;
        temp=temp->next;
        st.pop();
    }
    return true;
}
bool palin(Node* head){
   
        Node *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;//finding middle
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow)
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev;
        while (slow)
            if (fast->data != slow->data) return false;
            else fast = fast->next, slow = slow->next;
        return true;
    
}

//sorting odd and even index;
Node* oell(Node* head){
    Node* tmp2=head->next;
    Node *temp=head,*eve=head->next;
    while(eve->next!=nullptr && eve!=nullptr){
        temp->next=eve->next;
        temp=temp->next;
        eve->next=temp->next;
eve=eve->next;
    }
    temp->next=tmp2;
    return head;
}

//adding one to number
Node* add1(Node* head) {
    if (head == nullptr) return new Node(1); // Handle empty list edge case

    // 1. Reverse the list to start adding from the least significant digit
    Node* reversedHead = revell(head);
    Node* temp = reversedHead;
    Node* prev = nullptr; // Track previous node to handle a brand new head (e.g., 999 -> 1000)
    
    int carry = 1; // Start with a carry of 1 because we want to add 1
    
    // 2. Traverse and add the carry
    while (temp != nullptr) {
        int sum = temp->data + carry;
        temp->data = sum % 10;  // Becomes 0 if sum is 10
        carry = sum / 10;       // Becomes 1 if sum is 10
        
        prev = temp;            // Save current node before moving on
        temp = temp->next;
        
        // Optimization: If there's no more carry, we can stop early!
        if (carry == 0) break;
    }
    
    // 3. If there is still a carry left (e.g., 999 + 1), attach a new node at the end
    if (carry > 0) {
        prev->next = new Node(carry);
    }
    
    // 4. Reverse the list back to its original order and return
    return revell(reversedHead);
}
//adding one through recurssion
int helper(Node* temp){
    if(temp==nullptr)return 1;
    int carry=helper(temp->next);
    temp->data=temp->data +carry;
    if(temp->data<10) return 0;
    temp->data=0;
    return 1; 

}
Node* addi1(Node*head,int carry){
   int carry=helper(head);
    if(carry==1){
        Node* newh=new Node(0);
        newh->next=head;
        return newh;
    }
    else return head;
}

//sort linked list of 0,1,2
Node* sort012(Node* head){
    if(head==nullptr ||head->next==nullptr)return head;
    Node* dummy0=new Node(-1);
    Node* dummy1=new Node(-1);
    Node* dummy2=new Node(-1);
    Node* temp=head;
    Node* zero=dummy0,*one=dummy1,*two=dummy2;
    while(temp!=nullptr){
        if(temp->data==0){ zero->next=temp;
        zero=temp;
        }
        if(temp->data==1){ one->next=temp;
        one=temp;
        }
        if(temp->data==2){ two->next=temp;
        two=temp;
        }
        temp=temp->next;

    }
    zero->next=(dummy1->next)?dummy1->next:dummy2->next;
    one->next=dummy2->next;
    two->next=nullptr;
  Node* newHead = dummy0->next;
    
    delete dummy0;
    delete dummy1;
    delete dummy2;
    
    return newHead;
}

//finding node of intersection of y linked list

//brutee force store link list 1 in hash and then find if it is there in hasmap by 2
//better- find lenght,travel larger  by l2-l1 then travel simultaneously

 Node* Yintersection(Node* head1, Node* head2) {
    if (head1 == nullptr || head2 == nullptr) return nullptr;
    
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while (temp1 != temp2) {
        // If temp1 reaches the end, redirect it to the head of the OTHER list.
        // Otherwise, just move to the next node.
        temp1 = (temp1 == nullptr) ? head2 : temp1->next;
        
        // Do the exact same for temp2.
        temp2 = (temp2 == nullptr) ? head1 : temp2->next;
    }
    
    // If they intersect, temp1 will be the intersection node.
    // If they don't intersect, both will eventually become nullptr at the same time,
    // breaking the loop, and we safely return nullptr.
    return temp1;
}