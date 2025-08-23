#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(Node* head){
    if(head == NULL) return ;
    cout<<head->val<<" ";
    display(head->left);
    display(head->right);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(4);
    Node* c = new Node(5);
    Node* d = new Node(8);
    Node* e = new Node(21);
    Node* f = new Node(9);
    Node* g = new Node(11);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a);

}