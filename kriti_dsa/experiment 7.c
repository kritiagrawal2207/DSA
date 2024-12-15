#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildTree(node* root){
    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }
    // left ke liye
    cout<<data<<"ki left node: "<<endl;
    root->left = buildTree(root->left);
    // right ke liye
    cout<<data<<"ki right node: "<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTransversal(node* root){

    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node*root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* BuildfromLevelOrder(node* root){
    queue<node*>q;
    cout<<"enter data for root: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter the left node for "<<temp->data<<": "<<endl;
        int leftNode;
        cin>>leftNode;
        if(leftNode!=-1){
            temp->left = new node(leftNode);
            q.push(temp->left);
        }

        cout<<"Enter the right node for "<<temp->data<<": "<<endl;
        int rightNode;
        cin>>rightNode;
        if(rightNode!=-1){
            temp->right = new node(rightNode);
            q.push(temp->right);
        }
    }
}


int main() {
    
    node* root = NULL;
    // BuildfromLevelOrder(root);
    // levelOrderTransversal(root);
    
    
    root = buildTree(root);
    cout<<endl;
    // cout<<"Level order Transversal"<<endl;
    // levelOrderTransversal(root);
    cout<<endl;
    cout<<"Inorder Transversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder Transversal: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder Transversal: ";
    postorder(root);
    cout<<endl;
    


    return 0;
}
