#include<iostream>
 using namespace std;

// Going to follow the clean method of tree creation using constructors only

struct node {

int data;

node *left;
node *right;

node(int data){

this->data= data;

left= nullptr;
right= nullptr;

}



};


// now to create a new node: new node(x) returns an adress of where the new node is actualy stored.

node *root = new node(10); //the root pointer is now storing the adress of the new node where 10 is being stored as the data. node is our constructor



