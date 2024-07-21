#include <bits/stdc++.h>
using namespace std;

class Node{

  public:
    int data;
    Node* next;

  // Using Contructor to Implement data and NULL adress for initialization
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};

void insertAtHead(Node* &head, int d){
  Node* temp = new Node(d);
  temp -> next = head;   // Linking current node to before the head node
  head = temp;   // Pointing head to current node & Update Head
  cout << d << " inserted at head" << endl;
}

void insertAtEnd(Node* &tail, int d){
  // Create new node temp to insert at last
  Node* temp = new Node(d);
  tail -> next = temp;   // insert link of new temp address to tail node ka next me
  tail = temp;   // Pointing tail to new temp node / current node & update tail
  cout << d << " inserted at Tail" << endl;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
  // For 1st position, insertAtHead function will do it's work
  if (position == 1){    
    insertAtHead(head, d);
    return;
  }

  Node* temp = head;
  int count = 1;
  // Find Position 
  while (count < position-1){   // If position is 4, then move till 3rd Node
    temp = temp -> next;
    count++;
  }
  // After finding position of 2nd last node, check if position is telling to insert at last node or not => if (temp -> next == NULL)
  // Inserting at End
  if (temp -> next == NULL){
    insertAtEnd(tail, d);
    return;
  }
  // Interting at Position
  // Now temp reached to position-1 place
  Node* insertNode = new Node(d);  // Creating new node to insert
  insertNode -> next = temp -> next;  // Changing link
  temp -> next = insertNode;  // temp pointing to new / current insert node 
  cout << d << " inserted at position " << position << endl;
}

void deleteNode(Node* &head, int position){
  // deleting 1st Node / Starting Node
  if (position == 1){
    Node* temp = head;
    head = head -> next;   // move head to next node
    temp -> next = NULL;  // Unlink temp from new head & point to NULL
    cout << temp -> data << " deleted" << endl;
    delete temp;  // delete temp 
  }
  else {    // deleting any other node or Last node
    Node* current = head;
    Node* prev = NULL;
    int count = 1;
    while (count < position){
      prev = current;   // store previous current
      current = current -> next;  // move next
      count++;
    }
    prev -> next = current -> next;   // Link previous to current's next node
    current -> next = NULL;
    cout << current -> data << " deleted" << endl;
    delete current;
  }
}

void findAndDelete(Node* &head, Node* &tail, int d){
  Node* temp = head;
  Node* prev = NULL; 
  int found = 0;
  while (temp != NULL){
    if (temp -> data == d){
      prev -> next = temp -> next;  // Link previous to current's next node
      if (temp -> next == NULL){   // is temp the last node ?
        tail = temp -> next;      // then update tail 
      }
      temp -> next = NULL;   // Unlink the node to be deleted
      found = 1;
      break;
    }
    prev = temp;   // store previous node
    temp = temp -> next;   // move to next node
  }
  if (found == 1){
    delete temp;
    cout << d << " deleted" << endl;
  }
  else {
    cout << d << " Not found in the List" << endl;
  }
}

void print(Node* &head){
  if (head == NULL){   // Empty Node
    cout << "Empty List !" << endl;
  }
  else {
    cout << "List : ";
    Node* temp = head;    // Create Node & assign head in it to start from head
    while (temp != NULL){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
  }
  cout << endl;
}

int main(){

  Node* node1 = new Node(10);
  Node* head = node1;
  Node* tail = node1;
  
  insertAtHead(head, 9);
  insertAtHead(head, 1);
  
  print(head); 
  
  insertAtEnd(tail, 30);
  insertAtEnd(tail, 33);

  insertAtPosition(tail, head, 6, 90);

  //deleteNode(head, 4);
  
  print(head);

  findAndDelete(head, tail, 90);

  print(head);

  cout << "Head : " << head -> data << endl;
  cout << "Tail : " << tail -> data << endl;

  return 0;
}