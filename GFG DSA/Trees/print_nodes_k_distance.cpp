#include<iostream>
#include<algorithm>>


using namespace std;

struct node{
int data;

node *left;
node *right;


node(int data){


    left =nullptr;
    right =nullptr;
    this->data=data;
}



};



// We need to print nodes at k distance.
// so I will traverse the nodes at k distance keep a count and decerement it until count becomes zero and then store each of those values in a vector and then print that vector

void print_at_k_distance(node *root, int k){
    
    if (root == NULL) return;

     if(k==0){

        cout<<" "<<root ->data<<" ";
        return;


     }

     print_at_k_distance(root->left, k-1);
     print_at_k_distance(root->right, k-1);


       }


    
















