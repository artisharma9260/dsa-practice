#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node* next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
  };
class Solution {
public:
vector<pair<int,int>>findPairsWithGivenSum(Node* head,int target){
    vector<pair<int,int>> result;
    Node* temp1 = head;
    
    while(temp1 != NULL){
        Node* temp2 = temp1->next;
        while(temp2 != NULL){
            if(temp1->val + temp2->val == target){
                result.push_back({temp1->val,temp2->val});
            }
        }
    }
    return result;
    }
};