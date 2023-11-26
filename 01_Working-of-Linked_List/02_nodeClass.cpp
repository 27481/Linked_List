#include <iostream>
typedef unsigned long long int ll;
using namespace std;

class Node{

    public:
       int val;
       Node* next;
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 10 20 30 40
    Node a;
    a.val=10;
    Node b;
    b.val=20;
    Node c;
    c.val=30;
    Node d;
    d.val=40;

    // forming ll
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    
 
    return 0;
}