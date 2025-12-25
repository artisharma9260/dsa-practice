#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int val) : data(val),left(nullptr),right(nullptr){}
};
void storeInorder(Node* root,vector<int>& nodes){
    if(root == nullptr) return;
    storeInorder(root->left,nodes);
    nodes.push_back(root->data);
    storeInorder(root->right,nodes);

}
void fillPostorder(Node* root,vector<int>& nodes,int& index){
    if(root == nullptr) return;

    fillPostorder(root->left,nodes,index);
    fillPostorder(root->right,nodes,index);
    root->data = nodes[index++];
}
void convertBSTtoMaxHeap(Node* root){
    vector<int> nodes;
    int index = 0;

    storeInorder(root,nodes);
    fillPostorder(root,nodes,index);
}