#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isCBT(Node* root, int index, int cnt) {
    if (root == NULL) return true;

    if (index >= cnt) return false;

    return isCBT(root->left, 2 * index + 1, cnt) &&
           isCBT(root->right, 2 * index + 2, cnt);
}

bool isMaxOrder(Node* root) {
    // Leaf node
    if (root->left == NULL && root->right == NULL)
        return true;

    // Only left child exists
    if (root->right == NULL) {
        return (root->data >= root->left->data);
    }

    // Both children exist
    bool left = isMaxOrder(root->left);
    bool right = isMaxOrder(root->right);

    return left && right &&
           (root->data >= root->left->data) &&
           (root->data >= root->right->data);
}

bool isHeap(Node* root) {
    int index = 0;
    int totalCount = countNodes(root);

    return isCBT(root, index, totalCount) && isMaxOrder(root);
}
 