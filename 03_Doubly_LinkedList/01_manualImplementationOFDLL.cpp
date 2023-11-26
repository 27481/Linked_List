#include<iostream>
typedef unsigned long long int ll;
using namespace std;

class Node{  // DLL node 

 public: 
   int val;
   Node*next;
   Node*prev;

   Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL; 
   }
};

void display(Node*head){  // O(1) space
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<"\n";
}

void displayRec(Node *head){ // O(n) space
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}

void displayRecrev(Node *head){  // O(n) space
    if(head==NULL) return;
    displayRec(head->next);
    cout<<head->val<<" ";
}

void displaydoubly(Node*tail){

    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<"\n";
}

int main() {
    // 10 20 30 40 50
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;

    display(a);
    // displayRec(a);
    // displayRecrev(a);
    displaydoubly(e);

    return 0;
}