/*Maximum Depth of Binary Tree*/
//Solved by aryangupta02092002

#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};

int maxDepth(node* root) {
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

node *newnode(int data){
    node *element=new node();
    element->data=data;
    element->left=NULL;
    element->right=NULL;

    return element;
}

int main(){
    node *root = newnode(3);
    root->left = newnode(9);
    root->right = newnode(20);
    root->right->left = newnode(15);
    root->right->right = newnode(7);
    
    cout<<maxDepth(root);
}
