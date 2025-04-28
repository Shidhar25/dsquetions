// 5.Given a Singly Linked List, the task is to find the middle of the linked list. If the number of nodes are even, then there would be two middle nodes, so return the second middle node.
// Example:
// Input: linked list = 1 -> 2 -> 3 -> 4 -> 5
// Output: 3 
// Explanation: There are 5 nodes in the linked list and there is one middle node whose value is 3.
// Input: linked list = 1 -> 2 -> 3 -> 4 -> 5 -> 6
// Output: 4 
// Explanation: There are 6 nodes in the linked list, so we have two middle nodes: 3 and 4, but we will return the second middle node which is 4.


#include<bits./stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
class List{
    Node* head;
    Node* tail ;
    public:
    List(){
        tail=head=nullptr;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==nullptr){
            head= tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==nullptr){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void print(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data <<" ";
            temp = temp->next;
        }
        cout << endl;
    }    
    void pop_front(){
        Node * temp = head;
        if(head==nullptr){
            cout <<"List is empty" <<endl;
            return;
        }
        head = head->next;
        temp->next=NULL;
        free(temp);
    }
    void pop_back(){
        Node* temp = head;
        if(head==nullptr){
            cout <<"List is empty" <<endl;
            return;
        }
        while (temp->next=tail)
        {
            temp = temp->next;
        }
        temp->next=nullptr;
        delete(tail);
        tail = temp;
        
    }
    void insert(int val,int pos){
        Node* newNode  = new Node(val);
        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void middle(){
        Node* slow = head; 
        Node* fast = head;
        while(fast->next!=nullptr && fast!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << " middle value is " << slow->data <<endl;
        
    }
    void resverse(){
        Node* prev=nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while (curr!=NULL)
        {
            next = curr->next; // next node is stored
            curr->next=prev; // curresnt pointing to prev

            prev =curr; // updating prev to curr
            curr = next; // updating curr to next;
        }
        
        
    }
    void deleteMiddle(){
        Node* slow = head; 
        Node* fast = head;
        Node* prev = NULL;
        while(fast->next!=nullptr && fast!=nullptr){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;

        }
        prev->next = slow->next;
        delete(slow);
    }

    // merge LinkList alternatively 
    Node* merge_two_List(Node* h1, Node* h2, int num = 0) {
        if (h1 == nullptr) return h2;
        if (h2 == nullptr) return h1;
    
        if (num % 2 == 0) {
            h1->next = merge_two_List(h1->next, h2, num + 1);
            return h1;
        } else {
            h2->next = merge_two_List(h1, h2->next, num + 1);
            return h2;
        }
    }
    void merge_two_List1(List &l2) {
        head = merge_two_List(head, l2.head, 0);
    }
    
// 14.Write a function that moves the last node to the front in a given Singly Linked List.
// Examples:
// Input: 1->2->3->4->5                                        Input: 3->8->1->5->7->12
// Output: 5->1->2->3->4                                     Output: 12->3->8->1->5->7  

void end_to_start() {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    tail->next = head;
    head = tail;
    temp->next = nullptr;
    tail = temp;
}

// 13.Given a linked list and two integers M and N. Traverse the linked list such that you retain M nodes then delete next N nodes, continue the same till end of the linked list.
// Difficulty Level: Rookie 
// Examples: 
// Input:
// M = 2, N = 2
// Linked List: 1->2->3->4->5->6->7->8
// Output:
// Linked List: 1->2->5->6

// Input:
// M = 3, N = 2
// Linked List: 1->2->3->4->5->6->7->8->9->10
// Output:
// Linked List: 1->2->3->6->7->8

void deleteNodefrom(int m,int n){
    int count_m=0;
    int count_n=0;
    Node* prev = nullptr;
    Node* temp = head;
    while(temp!=nullptr){
        prev = temp;
        temp = temp->next;
        count_m++;
        count_n++;
        if(count_m==m){
            prev->next = temp->next;
            count_m=0;
        }
        if(count_n==n){
            prev->next = temp->next;
            count_n=0;
        }
    }
}
//     16.Write a GetNth() function that takes a linked list and an integer index and returns the data value stored in the node at that index position. 
// Input:  1->10->30->14,  index = 2
// Output: 30  
// The node at index 2 is 30
void GetNth(int n){
    Node* temp = head;

 for(int i=0;i<n;i++){
    temp=temp->next;
 }   
 cout << temp->data <<endl;
}

    
};

int main() {
    List l1, l2;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);
    l1.push_back(7);
    l1.push_back(8);
    l1.push_back(9);
    l1.push_back(10);


    // l1.deleteNodefrom(4,2);
    l1.print();
    l1.GetNth(2);
    return 0;
}