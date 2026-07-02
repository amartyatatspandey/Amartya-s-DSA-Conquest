#include<iostream>

using namespace std;


struct node{

int data;

node *left;
node * right;

node(int data){

this->data= data;

left= nullptr;
right= nullptr;


}

};


 // node* root= new node(10);




// to write a function which calculates height of a binary tree
// height is min number of edges and then +1, you keep checking is the right sub tree got some depth if both have


//Function to implement DFS, 

int maxdepth(node *root){

if (root== nullptr) return 0;

int l_depth= maxdepth(root->left);
int r_depth= maxdepth(root->right);

if (l_depth>r_depth){
    return l_depth+1;
}

else{
    return r_depth +1;
}


}








