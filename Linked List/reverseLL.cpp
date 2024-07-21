#include <bits/stdc++.h>
using namespace std;

class Node{

  public:
    int data;
    Node* next;

  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};

void insertNode(Node* &head, int d){
  Node* temp = new Node(d);
  // Empty LL
  if (head= NULL){
    temp -> next = head;
    head = temp;
  }
  // Existing LL
  else {
    Node* x = head;
    while ( x -> next != NULL ){
      x = x -> next;
    }
    x -> next = temp;
  }
}

// This return the new head(i,e. pointer adress) after the reversal of the Linked List
Node* reverseList(Node* &head){   
  Node* prev = NULL;
  Node* forward = NULL;
  Node* current = head;

  while (current != NULL){
    forward = current -> next;  // forward points to current's next node in order to hold the List
    current -> next = prev;  // then, link the current's node to previous node
    prev = current;   // move prev to next node
    current = forward;   // move current to next node
  }
  // the current prev will be at the last node => the new head of reversed LL
  return prev; 
}

// Reversing List By Recursion
// Node* reverseListRecusively(Node* head, Node* current, Node* prev){
//   // base case
//   if (current == NULL){
//     head = prev;
//     return head;
//   }

//   Node* forward = current -> next;
//   current -> next = prev;
//   prev = current;
//   current = forward;
//   reverseListRecusively(head, current, prev);
// }

void printList(Node* head){
  if (head == NULL)
    cout << "Empty LL !" << endl;
  else {
    cout << "List : ";
    Node* temp = head;
    while (temp != NULL){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    cout << endl;
  }
}

int main(){
  
  Node* head = NULL;

  insertNode(head, 12);
  insertNode(head, 13);
  insertNode(head, 14);

  // printList(head);

  // Node* current = head;
  // Node* prev = NULL;

  // Node* newHead = reverseListRecusively(head, current, prev);
  // Node* newHead = reverseList(head);

  printList(head);

  // cout << "Head : " << head -> data << endl;
  // cout << "Head : " << head -> next << endl;

  return 0;
}