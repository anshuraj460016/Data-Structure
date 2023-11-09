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

int sumofnode(Node*root){
    if(root==NULL) return 0;
    return root->val + sumofnode(root->left) + sumofnode(root->right);
}

int level(Node*root){
    if(root==NULL) return 0;
    return 1+max(level(root->right) , level(root->left));
}
int nodewithmaxvalue(Node*root){
    if(root==NULL) return INT_MIN;
    int Lmax=nodewithmaxvalue(root->left);
    int Rmax=nodewithmaxvalue(root->right);
    return max(root->val, max(Lmax,Rmax));
}

int sizeoftree(Node*root){
    if(root==NULL) return 0;
   return 1+sizeoftree(root->left) + sizeoftree(root->right);
}

    void display(Node*root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root-> right);
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
    display(a);
    sumofnode(a);
    cout<<endl;
    cout<<sumofnode(a);
    sizeoftree(a);
    cout<<endl<<sizeoftree(a);
    nodewithmaxvalue(a);
    cout<<endl<< nodewithmaxvalue(a);
    level(a);
    cout<<endl<<level(a);
    productofnode(a);
    cout<<endl<<productofnode(a);
}

