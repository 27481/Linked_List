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

void displayRecur(Node *head){
    Node*temp=head;
    if(head==NULL) return; // base case
    displayRecur(head->next); // call
    cout<<head->val<<" "; // kaam
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Creating 5 nodes dynamically
    Node *a= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    // Connecting the address of each node 
    a->next=b;
    b->next=c;
    c->next=d;

    // cout<<a->next->next->next->val<<" "<<"\n";
    displayRecur(a);

    return 0;
}