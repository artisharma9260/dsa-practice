#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = nullptr;
    }
    Node(int val,Node* next1){
        data = val;
        next = next1;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = nullptr;
    }
    void insert(int val){
        Node* newNode = new Node(val);
        if(!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next)
           temp = temp->next;
         temp->next = newNode;
    }
    void print() {
        Node* temp = head;
        while(temp) {
            cout <<temp->data;
            if(temp->next) cout << "->";
            temp = temp->next;
        }
        cout << "-> NULL\n";
    }
};
class solution {
public:
    void sortZeroOneTwo(LinkedList& l1){
        Node* zeroDummy = new Node(-1);
        Node* oneDummy = new Node(-1);
        Node* twoDummy = new Node(-1);
        Node* zeroTrail = zeroDummy;
        Node* oneTrail = oneDummy;
        Node* twoTrail = twoDummy;
        
        Node* curr = l1.head;
        while(curr) {
            if(curr->data == 0){
                zeroTrail->next = curr;
                zeroTrail = zeroTrail->next;
            } else if(curr->data == 1){
                oneTrail->next = curr;
                oneTrail = oneTrail->next;
            } else {
                twoTrail->next = curr;
                twoTrail = twoTrail->next;
            }
            curr = curr->next;
        }
        zeroTrail->next = oneDummy->next ? oneDummy->next : twoDummy->next;
        oneTrail->next = twoDummy->next;
        twoTrail->next = nullptr;
        
        l1.head = zeroDummy->next;
        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;
    }
};