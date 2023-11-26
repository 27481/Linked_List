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
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *a= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    a->next=b; // (*a).next=b (we are storing the address of b into a's node type pointer) 
    b->next=c;
    c->next=d;

    cout<<a->next->next->next->val<<" "<<"\n";

    display(a);
    return 0;
}