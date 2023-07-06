#include<bits/stdc++.h>
using namespace std;

struct node{
 
 int data;
 struct node *left,*right;

};

node* newNode(int data){

  node* temp=new node;
  temp->data=data;
  temp->left=temp->right=NULL;

  return temp;

}


void InOrder (node* node){
  if (node==NULL) return;
  InOrder(node->left);
  cout<<node->data<<"->";
  InOrder(node->right);
}

void PreOrder(node * node){
  if(node==NULL) return;
  cout<<node->data<<"->";
  PreOrder(node->left);
  PreOrder(node->right);
}

void PostOrder(node *node){
  if(node==NULL) return;
  PostOrder(node->left);
  PostOrder(node->right);
  cout<<node->data<<"->";

}

int main(){
  freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
  freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    // node* root=newNode(1);

    // root->left=newNode(2);
    // root->right=newNode(3);
    // root->left->left=newNode(4);
    // root->left->right=newNode(5);
    // root->right->right=newNode(6);
    // root->right->left=newNode(7);
    // root->left->left->left=newNode(8);
    // root->left->left->right=newNode(9);

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
    cout<<"\n"<<endl;

    cout<<"InOrder traversal: ";
    InOrder(root);
    cout<<"\n"<<endl;
    cout<<"PreOrder traversal: ";
    PreOrder(root);
    cout<<"\n"<<endl;
    cout<<"PostOrder traversal: ";
    PostOrder(root);
    cout<<"\n"<<endl;
    
  
  
  return 0;  
}