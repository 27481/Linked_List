#include <iostream>
typedef unsigned long long int ll;
using namespace std;

class Node{   // User defined data type
    public:
     int val;
     Node*next;
     Node(int val){
        this->val=val;
        this->next=NULL;
     }
};

class LinkedList{ // User defined data structure 

public:
    Node*head=NULL;
    Node*tail=NULL;
    int size=0;

    LinkedList(){ // defining a constructor 
      head=tail=NULL;
      size=0;
    }
    
    void insertAtTail(int val){
        Node *temp= new Node(val);
        if(size==0)
            head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
        cout<<"\n";
    }

    void insertAtHead(int val){
    Node *temp= new Node(val);
    temp->next=head;
    head=temp;
    size++;
    cout<<"\n";
    }

    void insertAtIdx(int idx, int val){
        Node *temp= new Node(val);

        if(idx<0 || idx>size)
          cout<<"Invalid Index"<<"\n";
        if(idx==0)
            insertAtHead(val);
        if(idx==size)
          insertAtTail(val);
        else{
            Node *t= new Node(val);  // new node to insert 
            Node *temp=head;

            for(int i=1; i<=idx-1; i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
          cout<<"\n";
        }

    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
             cout<<"Invalid index";
             return -1;
        }
        else if(idx==0)
            return head->val;
        else if(idx==size-1)
            return tail->val;
        else{
            Node* temp=head;
            for(int i=1; i<=idx; i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
            if(size==0){
                cout<<"LinkList is empty";
            }
            head=head->next;
            size--;
        }
};



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    LinkedList ll;  // { }
    ll.insertAtTail(10); // {10->NULL};
    ll.display();
    ll.insertAtTail(20); // {10->20->NULL}
    ll.display();
    ll.insertAtTail(30); // {10->20->30->NULL}
    ll.insertAtTail(40); // {10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(50); // {50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(24); // {24->50->10->20->30->40->NULL}
    ll.insertAtIdx(4,80); // {24->50->10->20->80->30->40->NULL}
    ll.display();
    cout<<ll.getAtIdx(0)<<endl; // TC->O(n)
    ll.deleteAtHead();
    ll.display();


    
    // cout<<"\n"<<ll.size;
 
    return 0;
}