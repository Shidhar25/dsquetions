#include <bits./stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = nullptr;
    }

};
class List{
    Node* head;
    Node* tail;
    public:

    List(){
        head=tail=nullptr;
    } 
    void push_front(int val){
        Node* newNode = new Node(val); 
        if(head==nullptr){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==nullptr){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail = newNode;
        }
    }
    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data <<" " ;
            temp = temp->next;
        }
    }
    void pop_front(){
        if(head==nullptr){
            cout <<"List is empty" <<endl;
            return;
        }
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        free(temp);
        
    }
    void pop_back(){
        if(head==nullptr){
            cout <<"List is empty" <<endl;
            return; 
        }
        Node* temp = head;
        while (temp->next!=tail)
        {
           temp=temp->next;
        }
        temp->next=nullptr;
        delete(tail);
        tail = temp;
        
    }
    int insert(int val,int pos){
        Node* newNode = new Node(val);
        Node *temp = head;
        if(pos<0){
            return -1;
        }
        if(pos==0){
            push_front(val);
        }
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void reverse(){
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = NULL;
        while (curr!=NULL)
        {
            next= curr->next; // next is stored
            curr->next=prev;  // starting pointing to null


            prev=curr; // updating
            curr=next;
        }
        head = prev;

    }
    void middle(){
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->data <<endl;
    }

};
int main(){
    List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_front(5);
    ll.pop_back();
    ll.push_back(50);
    ll.pop_front();
    ll.insert(4,2);
    ll.print();
    ll.reverse();
    cout << endl;
    ll.middle();
    ll.print();


}