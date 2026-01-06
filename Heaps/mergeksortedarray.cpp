#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    int i; 
    int j; 

    node(int data, int row, int col) {
        this->data = data;
        i = row;
        j = col;
    }
};

class compare {
public:
    bool operator()(node* a, node* b) {
        return a->data > b->data;  
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& karrays, int k) {
    priority_queue<node*, vector<node*>, compare> minHeap;
    for (int idx = 0; idx < k; idx++) {
        if (!karrays[idx].empty()) {
            node* tmp = new node(karrays[idx][0], idx, 0); 
            minHeap.push(tmp);  
        }
    }

    vector<int> ans;
    while (!minHeap.empty()) {
        node* tmp = minHeap.top();
        minHeap.pop();

        ans.push_back(tmp->data);

        int row = tmp->i;
        int col = tmp->j;

        if (col + 1 < (int)karrays[row].size()) {
            node* next = new node(karrays[row][col + 1], row, col + 1); 
            minHeap.push(next);
        }

        delete tmp;
    }

    return ans;
}