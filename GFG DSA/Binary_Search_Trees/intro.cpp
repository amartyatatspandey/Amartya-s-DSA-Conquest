/*
A binary Search tree is different from normal search tree by 
having the key(the data it holds).
left child must have data which is lesser, right must have data which is larger
both chils also follow this property

this structure reduces search time complexity to O(h) h being height of the tree

*/

#include<iostream>
#include<algorithm>

using namespace std;

//Making the structure which is a linked list which is our tree

struct node {

int key;

struct node * left,* right;// * pointer called left and right struct node

};

//Utility function to add node
/*
struct node *   newNode   (int item)
^^^^^^^^^^^^   ^^^^^^^^   ^^^^^^^^^^
return type    name       parameter
*/

struct node * newnode(int item){

    node * temp = new node; // new is an operator which creates new memory space or new variable
    temp->key= item;
    temp->left= NULL;
    temp->right= NULL;
    return temp;
}

struct node * insert(struct node * node, int key){




    
}



