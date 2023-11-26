#include <iostream>
typedef unsigned long long int ll;
using namespace std;

class Node{

    public: 
      int val;
      Node *next;
      Node(int val){  // Constructor to make Node 
        this->val=val;
        this->next=NULL;
       }
};

void display(Node *head){
    Node*temp=head;

    while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
    }
    cout<<"\n";
}

void size(Node*head){
    Node*temp=head;

    int cnt=0;

    while(temp!=NULL){
    cnt++;
    temp=temp->next;
    }
    cout<<cnt;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *a= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    // cout<<a->next->next->next->val<<" "<<"\n";
    display(a);
    size(a);

    return 0;
}