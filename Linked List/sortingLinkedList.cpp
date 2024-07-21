#include <bits/stdc++.h>
using namespace std;

class Node{

  public:
    int data;
    Node* next;
  
  Node (int data){
    this -> data = data;
    this -> next = NULL;
  }
};

void sortList(Node* &head){
  int swapping;
  Node* temp;
  if (head == NULL) cout << "Empty List";
  else if (head -> next == NULL) {
    return;
  } 
  else {
    swapping = 1;
    while (swapping){
      swapping = 0;
      temp = head;
      while ((temp -> next) != NULL){
        if (temp -> data > (temp -> next) -> data){
          // swap data part , x > y
          swap(temp -> data, (temp -> next) -> data);
          swapping = 1;
        }
        if (swapping == 0) return;
        temp = temp -> next;
      }
    }
  }
}

void insert(Node* &head, int d){
  Node* temp = new Node(d);
  if (head == NULL){
    temp -> next = head;
    head = temp;
  }
  else {
    Node* t = head;
    while (t -> next != NULL){
      t = t -> next;
    }
    t -> next = temp;
  }
}

void printList(Node* &head){
  if (head == NULL) 
    cout << "Empty List" << endl;
  else {
    Node* temp = head;
    cout << "List : ";
    while (temp != NULL){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    cout << endl;
  }
}

int main(){
  
  Node* head = NULL;

  insert(head, 20);
  insert(head, 2);
  insert(head, 11);
  insert(head, 16);

  printList(head);

  sortList(head);

  printList(head);

  return 0;
}