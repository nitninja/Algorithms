#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left,*right;
};

node* newNode(int data){

    node* temp= new node;
    temp->data=data;
    temp->left=temp->right=NULL;

    return temp;
}

void PrintLeftView(node* node, int level,int* maxlevel){

  if(node==NULL) return;
  
  if(*maxlevel<level){
    cout<<node->data<<"->";
    *maxlevel=level;

  }

    PrintLeftView(node->left,level+1,maxlevel);
    PrintLeftView(node->right,level+1,maxlevel);


}

void leftView(node* node){
    int maxlevel=0;
    PrintLeftView(node,1,&maxlevel);
    // if(!node) return;
    
    // cout<<node->data<<"->";
    // leftView(node->left);

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
    // root->left->left->left=newNode(8);
    // root->left->left->right=newNode(9);
    root->right->right->left=newNode(14);
    leftView(root);
  
  
  return 0;  
}