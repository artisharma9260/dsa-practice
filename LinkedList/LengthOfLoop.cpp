#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node* next;
  
  Node(int data1,Node* next1){
      data = data1;
      next = next1;
  }
  Node(int data1){
      data = data1;
      next = nullptr;
  }
};
class solution{
    public:
    int lengthofloop(Node* head){
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return countLoopLength(slow);
            }
        }
        return 0;
    }
    int countLoopLength(Node* meetingPoint){
        Node* temp = meetingPoint;
        int length = 1;
        
        while(temp->next != meetingPoint) {
            temp = temp->next;
            length++;
        }
        return length;
    }
};