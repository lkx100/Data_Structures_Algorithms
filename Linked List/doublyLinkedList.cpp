#include <bits/stdc++.h>
using namespace std;

class Node{

  public:
    int data;
    Node* prev;
    Node* next;

  Node(int data){
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
  }
};

void insertAtHead(Node* &head, int d){
  if (head == NULL){   // Empty List
    Node* temp = new Node(d);
    head = temp;
  }
  else {
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
  }
}

void insertAtTail(Node* &tail, Node* &head, int d){
  if (head == NULL){   // Empty List
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
  }
  Node* temp = new Node(d);
  tail -> next = temp;
  temp -> prev = tail;
  tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
  if (position == 1){
    insertAtHead(head, d);
    return;
  }

  Node* temp = head;
  int count = 1;
  while (count < position-1){
    temp = temp -> next;
    count++;
  } 

  if  (temp -> next == NULL){
    insertAtTail(tail, head, d);
    return;
  }

  Node* current = new Node(d);
  current -> next = temp -> next;  // Link current node to next node
  temp -> next -> prev = current;   // link next node to current node
  temp -> next = current;
  current -> prev = temp;
}

void deleteNode(Node* &head, int position){
  // deleting 1st Node / Starting Node
  if (position == 1){
    Node* temp = head;   
    temp -> next -> prev = NULL;   // Unlink from head
    head = temp -> next;   // Point head from it's initial to temp 
    temp -> next = NULL;
    delete temp;
  }
  else {    
    Node* current = head;
    Node* temp = NULL;
    int count = 1;

    while (count < position){
      count++;
      temp = current;
      current = current -> next;
    }

    current -> prev = NULL;
    temp -> next = current -> next;
    current -> next;
    delete current;
  }
}

void listLength(Node* &head){
  Node* temp = head;
  int count = 0;
  while (temp != NULL){
    temp = temp -> next;
    count++;
  }
  cout << "Length of list : " << count << endl;
}

void printList(Node* &head){
  Node* temp = head;
  while (temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}

int main(){

  Node* newNode = new Node(10);
  Node* head = newNode;
  Node* tail = newNode;

  insertAtHead(head, 50);
  insertAtTail(tail, head, 20);
  insertAtPosition(head, tail, 2, 30);
  insertAtPosition(head, tail, 1, 40);
  insertAtPosition(head, tail, 6, 60);
  deleteNode(head, 4);

  printList(head);

  listLength(head);

  cout << "Head : " << head -> data << endl;
  cout << "Tail : " << tail -> data << endl;

  return 0;
}