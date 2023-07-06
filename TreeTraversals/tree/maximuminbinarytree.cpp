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

int maximum(node* node){
    
    if(node==NULL) return 0;
    
    int max=node->data;
    
    // if(max<node->data) max=node->data;
    int left=maximum(node->left);
    int right=maximum(node->right);
    // cout<<right<<" ";

    if(left>max) max=left;
    if(right>max) max=right;

//    if(node->left!=NULL){
//     maximum(node->left);
//     if(node->data>max){
//         max=node->data;
//     }
//    }
//    if(node->right!=NULL){
//     maximum(node->right);
//     if(node->data>max) max=node->data;
//    }

   return max;

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
    
    cout<<maximum(root);
  
  return 0;  
}