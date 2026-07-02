#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;


struct node{

    int data;
    node *left;
    node * right;

// contructor now
    node(int data){

        left= nullptr;
        right = nullptr;

        this->data= data;
}


};
// purpose is of level order traversal
/*

so I basically need to stay on the same level


so its basically breadth first search and not dfs

*/

void level_order_traversal(node *root){





}




