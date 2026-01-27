#include<bits/stdc++.h> 
using namespace std; 

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* append(Node* head, int value) {
        Node* newNode = new Node(value);
        if (!head) {
            return newNode;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
        return head;
    }
    void printlist(Node* head) {
        Node* current = head;
        while (current) {
            cout << current->data << " "; 
            current = current->next;
        }
        cout << endl;
    }
}; 

class Solution { 
public:
    Node* reverseList(Node* node) {
        Node* prev = nullptr;
        Node* current = node;
        while (current) {
            Node* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }

    Node* addOne(Node* head) {
        head = reverseList(head);
        Node* current = head;
        int carry = 1;

        // Iterate through the reversed list
        while (current != nullptr && carry != 0) {
            int sum = current->data + carry;
            current->data = sum % 10;
            carry = sum / 10;
          
            if (current->next == nullptr && carry != 0) {
                current->next = new Node(carry);
                carry = 0; 
            }
            current = current->next;
        }


        head = reverseList(head);
        return head;
    }
};