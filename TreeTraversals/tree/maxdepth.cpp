#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left,*right;
};

node* newNode(int data){

    node* temp=new node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;

}

int maxDepth(node* node){
    if(node==NULL) return 0;
    int leftDepth=maxDepth(node->left);
    int rightDepth=maxDepth(node->right);

    if(leftDepth>rightDepth) return leftDepth+1;
    else return rightDepth+1;
}

int main(){

    freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);


    node* root=newNode(10);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(7);
    root->left->right=newNode(8);
    root->right->right=newNode(15);
    root->right->left=newNode(12);
    root->left->left->left=newNode(8);
    root->left->left->right=newNode(9);
    root->right->right->left=newNode(14);

    cout<<maxDepth(root);

  return 0;
}