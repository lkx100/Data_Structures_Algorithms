#include <bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
  
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};
Node* head = NULL;

void insert(int data){
  Node* newNode = new Node(data);
  if (head == NULL){
    newNode->next = head;
    head = newNode;
  }
  else {
    Node* temp = head;
    while (temp -> next != NULL){
      temp = temp->next;
    }
    temp -> next = newNode;
  }
}

bool isLoop(){
  if (head == NULL) return false;

  Node* temp = head;
  map < Node*, bool > visited;

  while (temp != NULL){
    // if the node is already visited / loop present
    if (visited[temp] == true) return true;
    // for un-explored nodes, mark them true in 1st visit
    else  visited[temp] = true;
    // move ahead
    temp = temp -> next;
  }
  // No node found true in a single trip
  return false;
}

void printList(){
  if(head == NULL){
    cout << "Empty List\n";
    return;
  }
  cout << "\nList : ";
  Node* temp = head;
  while (temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}

bool floydsAlgorithm(){
  Node* fast = head;
  Node* slow = head;
  while (slow != NULL and fast != NULL){
    fast = fast -> next;
    if (fast != NULL){
      fast = fast -> next;
    }
    slow = slow -> next;
    if (slow == fast){
      return true;
      // return slow; 
    }
  }
  return false;
  // return slow;
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
    while (end -> next != NULL){
      end = end -> next;
    }

    end -> next = start;

  }
}

void detectLoop(bool a){
  if (a) cout << "\nLoop: True" << endl;
  else cout << "\nLoop: False" << endl;
}

void headOfLoop1(){
  map <Node*, bool> visited;
  Node* temp = head;
  while (temp != NULL){
    if (visited[temp -> next] == true) {
      cout << "Head of Loop: " << (temp->next)->data << endl;
      return;
    }
    visited[temp] = true;
    temp = temp -> next;
  }
  cout << "No Loop detected" << endl;
}

void headOfLoop2(){
  if (head == NULL){
    cout << "No Loop" << endl;
    return;
  }
  else if (isLoop()){
    // Node* intersection = floydsAlgorithm();
    Node* intersection = NULL;
    Node* slow = head;
    while (slow != intersection){
      intersection = intersection -> next;
      slow = slow -> next;
    }
    cout << "Head of Loop: " << slow -> data << endl;
  } 
  else cout << "No Loop In List" << endl;
}

void removeLoop1(){
  if (head == NULL){
    cout << "NO loop" << endl;
  }
  else {
    map <Node*, bool> visited;
    Node* temp = head;
    while (temp != NULL){
      if (visited[temp -> next] == true) break;
      visited[temp] = true;
      temp = temp -> next;
    }
    temp -> next = NULL;
  }
}

int main(){
  printList();
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  printList();
  makeLoop(2);
  // detectLoop(isLoop());
  detectLoop(floydsAlgorithm());
  headOfLoop1();
  // headOfLoop2();
  removeLoop1();
  detectLoop(floydsAlgorithm());
  return 0;
}