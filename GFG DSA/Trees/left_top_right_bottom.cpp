#include<iostream>
#include<algorithm>

using namespace std;

struct node{

int data;
 node*  left;
 node * right;

node(int data){

    left= nullptr;
    right = nullptr;
    this->data=data;
}

};


void print_left(node* root){

if(root->left!=nullptr){

    print_left(root->left);
}
else{

    cout<<" "<<root->data<<" ";
    
}
}

void print_right(node* root){


if(root->right!=nullptr){

    print_right(root->left);
}
else{

    cout<<" "<<root->data<<" ";
    
}

void print_bottom(node *root){

if(root->right==nullptr && root-> left==nullptr){

cout<<" "<<root->data<<" ";

}


}

void print_top(node* root){

    print_left(node* root);
    cout<<" "<<root->data<<" ";
    print_right(node* root);
}





};




