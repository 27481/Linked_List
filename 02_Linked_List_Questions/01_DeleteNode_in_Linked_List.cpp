#include <iostream>
typedef unsigned long long int ll;
using namespace std;

class Node{
     public:
      int val;
      Node* next;
       Node(int val){
        this->val=val;
        this->next=NULL;
     }
};
void display(Node *head){
    while (head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<"\n";
};

Node* deleteNode(Node*head, Node*target){
    if(head==target){ 
        head=head->next;
         return head;
    }
    Node *temp=head;
    
    while(temp->next!=target){
        temp=temp->next;
    }
    temp=temp->next->next;
    return head;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // making nodes 
    Node *a= new Node(1);
    Node *b= new Node(2);
    Node *c= new Node(3);
    Node *d= new Node(4);
    Node *e= new Node(5);

    // linking next of every node
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    Node *head=a;
    display(head);

    head=deleteNode(head,a);
    display(head);

    return 0;
}