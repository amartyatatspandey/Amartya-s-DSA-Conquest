#include<iostream>

using namespace std;


struct node{

int data;
node *left;
node *right;

node(int data){


    this-> data=data;
    left = nullptr;
    right = nullptr;
}

};



int size(node *root){

if(root==nullptr){

    return 0;
}
else {

int tree_size;

return tree_size= 1+ size(root->left)+ size(root->right);



}







