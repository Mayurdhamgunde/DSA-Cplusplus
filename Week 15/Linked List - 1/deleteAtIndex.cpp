#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size = 0;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void inserAt(int idx,int val){
        Node* t = new Node(val);
        Node* temp = head;
        if(idx<0 || idx>size){
            cout<<"Invalid idx "<<endl;
            return;
        } 
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
                t->next = temp->next;
                temp->next = t;
                size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid idx ";
            return -1;
        }
        else if(idx==0) return head->val; 
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty ";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtidx(int idx){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(idx<0 || idx>=size-1){
            cout<<"Invalid index" ;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
 
};
int main(){
    LinkedList ll;
    ll.insertAtTail(60);
    ll.insertAtTail(20);
    ll.insertAtTail(90);
    ll.insertAtHead(45);
    ll.insertAtTail(10);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtHead();
    ll.display();
    // cout<<ll.getAtIdx(4);
 
    ll.display();
    ll.deleteAtidx(1);
    ll.display();
    

    return 0;
}