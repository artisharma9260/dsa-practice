#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        node->val = temp->val;
        node->next=temp->next;
        delete temp;
    }
};