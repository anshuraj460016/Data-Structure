#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int productofnode(Node*root){
    if(root==NULL) return 1;
  
    return (root->val) *productofnode(root->right) *productofnode(root->left);

}
int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(50);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
   productofnode(a);
   cout<<productofnode(a);

}