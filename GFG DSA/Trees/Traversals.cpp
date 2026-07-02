#include<iostream>
 
using namespace std;

struct node{

    int data;

    struct node * left, * right;

    node(int data)       // Constructor, I can declare and call unlike using normal function in struct, it also shares name with its class or struct
    {left = NULL; right = NULL;
        this->data=data;

    }

};


void print_inorder_traversal(struct node *root){                          //input of this function will be pointer to the noide from ehich you want inorder traversla to occur

    if(root == NULL) return; // if the pointer passed is null return void;

    // Inorder mean u print left then root and then right

    print_inorder_traversal(root->left);
    print_inorder_traversal(root->right);
     cout<<" "<<root->data<<" ";

}


