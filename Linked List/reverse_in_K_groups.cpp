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
Node *head = NULL;
Node *previous = NULL;  // previous node of the newly created node

void insertNode(int d){
  Node* nayaNode = new Node(d);
  if (head == NULL){
    nayaNode -> next = head;
    head = nayaNode;
    previous = nayaNode;
  }
  else {
    previous -> next = nayaNode;
    previous = nayaNode;
  }
}

int listLength(){
  if (head == NULL) return 0;
  if (head -> next == NULL) return 1;
  int len = 1;
  Node* temp = head;
  while (temp -> next != NULL){
    temp = temp -> next;
    len++;
  }
  return len;
}

Node* reverseLL(){
  Node* prev = NULL;
  Node* current = head;
  Node* forward;
  while (forward != NULL){
    forward = current -> next;
    current -> next = prev;
    prev = current;
    current = forward;
  }
  
  // prev is new head now
  // you can return prev as head
  return prev; 
}

void printList(Node* newHead){
  if (newHead == NULL) cout << "Empty List" << endl;
  else {
    Node* temp = newHead;
    cout << "List : ";
    while (temp != NULL){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    cout << endl;
  }
}

void reverseInGroups(Node* initial, Node* forward){
  // if (itr == 0)  
  //   return;
  if (forward == NULL || initial -> next == NULL)
    return;
  else {
    // Swap data values
    int temp = initial -> data;
    initial -> data = forward -> data;
    forward -> data = temp;
    // Moving to Next group
    initial = forward -> next;
    forward = initial -> next;
    // reverseInGroups((itr-1), initial, forward);
    reverseInGroups(initial, forward);
  }
}

int main(){
  
  insertNode(12);
  insertNode(13);
  insertNode(14);
  insertNode(15);

  int length = listLength();
  int k = 2; // groups
  int numberOfItrerations = length / k;
  reverseInGroups(head, head->next);

  printList(head);

  // cout << "Length : " << listLength() << endl;

  return 0;
}