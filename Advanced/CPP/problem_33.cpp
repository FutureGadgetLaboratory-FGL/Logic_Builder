/*Level Order Traversal*/
//Solved by aryangupta02092002

#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

vector<vector<int>> levelOrder(node* root) {
    vector<vector<int>> ans;
    if(!root){
        return ans;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> tmp;
        int sz = q.size();
        for(int i=0; i<sz; i++){
            auto curr = q.front();      q.pop();
            tmp.push_back(curr->data);
            
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        ans.push_back(tmp);
    }
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
    node *root = newnode(3);
    root->left = newnode(9);
    root->right = newnode(20);
    root->right->left = newnode(15);
    root->right->right = newnode(7);
    
    vector<vector<int>> ans = levelOrder(root);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
