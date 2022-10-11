/*Binary Tree Maximum Path Sum*/
//Solved by aryangupta02092002

#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};

int pathUtil(node* root, int &ans){
    if(root==NULL){
      return 0;
    }
    int tmp1 = root->data;
    int left1 = pathUtil(root->left, ans);
    int right1 = pathUtil(root->right, ans);
    
    int t = max(max(tmp1, tmp1 + left1 + right1), max(tmp1 + left1, tmp1 + right1));
    if(ans < t){
      ans = t;
    }
    return max(max(tmp1 + left1, tmp1 + right1), tmp1);
}

int maxPathSum(node* root) {
    int ans = root->data;
    pathUtil(root, ans);
    return ans;
}

node *newnode(int data){
    node *element=new node();
    element->data=data;
    element->left=NULL;
    element->right=NULL;

    return element;
}

int main(){
    node *root = newnode(-10);
    root->left = newnode(9);
    root->right = newnode(20);
    root->right->left = newnode(15);
    root->right->right = newnode(7);
    
    cout<<maxPathSum(root);
}
