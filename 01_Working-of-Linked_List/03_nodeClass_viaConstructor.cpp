#include <iostream>
typedef unsigned long long int ll;
using namespace std;

class Node{   // Linked List node 

    public:
       int val;
       Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL; // puttting next to store NULL value to avoid garbage allocation 
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    cout<<&a<<endl;
    cout<<a.next<<endl;

    // forming ll
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    cout<<(b.next)->val<<endl; // Printing value of NODE c without using c via dereferencing
    cout<<((((a.next)->next)->next)->val);
    // cout<<(a.next)->next;

    
    // Putting NULL by default in next block of each NODE to avoid garbage value without using Constructor
    // a.next=NULL
    // b.next=NULL
    // c.next=NULL
    // d.next=NULL


    
 
    return 0;
}