#include <bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
  
  Node(int data){
    this->data = data;
    this->next = nullptr;
  }
};
Node* head = nullptr;

void insert(int data){
  Node* newNode = new Node(data);
  if (head == nullptr){
    newNode->next = head;
    head = newNode;
  }
  else {
    Node* temp = head;
    while (temp -> next != nullptr){
      temp = temp->next;
    }
    temp -> next = newNode;
  }
}

void printList(Node* Head){
  if(head == nullptr){
    cout << "Empty List\n";
    return;
  }
  cout << "\nList : ";
  Node* temp = Head;
  while (temp != nullptr){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}

void makeLoop(int position){
  if (position == 0)
    cout << "Not Possible" << endl;
  else {
    int count = 1;
    Node* start = head;
    Node* end = head;
    // start node
    while (count < position){
      start = start -> next;
      count++;
    }
    // end Node
    while (end -> next != nullptr){
      end = end -> next;
    }

    end -> next = start;

  }
}

Node* intersectingNode(){  // floyd's Algorithm
  if (head == nullptr)
    return nullptr;

  Node* fast = head;
  Node* slow = head;
  // Move both of them ny single node, until any of them is at nullptr
  while (slow != nullptr and fast != NULL){
    fast = fast -> next;
    if (fast != nullptr)
      fast = fast -> next;
    slow = slow -> next;

    if (slow == fast)  // Loop Exits
      return slow;   // Return common / intersection Node
  }
  return nullptr;  // No intersection -> No loop
}

Node* loopHead(){
  Node* intersection = intersectingNode();
  if (intersection == nullptr)  // No loop, No intersecting Node, return NULL
    return nullptr;
  Node* slow = head;  // move both by single node until they become equal
  while (slow != intersection){  
    intersection = intersection -> next;  
    slow = slow -> next;
  }
  return slow;
}

Node* removeLoop(){
  if (head == nullptr){
    return nullptr;
  }
  Node* headOfLoop = loopHead();
  if (loopHead == nullptr)  // no loop, no loopHead, directly return head
    return head;
  Node* temp = headOfLoop;
  while (temp -> next != headOfLoop){  // loop exists
    temp = temp -> next;
  }
  temp -> next = nullptr;  // remove loop
  return head;  // then return head
}

bool isLoop(){
  if (head == nullptr)
    return false;
  
  map <Node*, bool> visited;
  Node* temp = head;
  while (temp != nullptr){
    if (visited[temp] == true)  // Loop exists
      return true;

    visited[temp] = true;
    temp = temp -> next;
  }
  // loop dosen't exists
  return false;
}

void loopStatus(bool a){
  if (a) cout << "\nLoop: True" << endl;
  else cout << "\nLoop: False" << endl;
}

int main(){
  printList(head);
  insert(1);
  insert(3);
  insert(5);
  insert(7);
  insert(9);
  printList(head);
  loopStatus(isLoop());
  makeLoop(3);   // create loop
  loopStatus(isLoop()); 
  Node* temp = removeLoop();  // remove loop
  loopStatus(isLoop());
  printList(head);
  return 0;
}
