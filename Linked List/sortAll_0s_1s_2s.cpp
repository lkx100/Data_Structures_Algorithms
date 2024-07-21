#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};
Node *head = nullptr;

void insert(int data) {
  Node *newNode = new Node(data);
  if (head == nullptr) {
    newNode->next = head;
    head = newNode;
  } else {
    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

void printList(Node *x) {
  if (x == nullptr) {
    cout << "Empty List\n";
    return;
  }
  cout << "\nList : ";
  Node *temp = x;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
// O(n^2)
Node *sortList1(){
  if (head == nullptr)
    return nullptr;

  int swapping = 1;
  while (swapping){
    Node *curr = head;
    swapping = 0;
    while (curr -> next != nullptr){
      if (curr->data > curr->next->data){  // swap
        swap(curr->data, curr->next->data);
        swapping = 1;
      }
      curr = curr -> next;
    }
  }
  return head;
}
// Optimized Approach - O(n)
// Data change
Node *sortList2(){
  if (head == nullptr)
    return nullptr;

  vector<int> freq(3, 0);
  Node *temp = head;
  while (temp != nullptr){
    freq[ temp->data ]++;
    temp = temp -> next;
  }
  cout << "\nFreq: ";
  for (auto i : freq) cout << i << " ";
  cout << endl;

  Node *curr = head;
  for (int i = 0; i < 3; i++){
    int count = freq[i];
    while (count--){
      curr -> data = i;
      curr = curr -> next;
    }
  }
  return head;
}

Node *sortList3(){
  if (head == nullptr)
    return nullptr;

  Node *zeroHead = new Node(-1);
  Node *zeroTail = zeroHead;
  Node *oneHead = new Node(-1);
  Node *oneTail = oneHead;
  Node *twoHead = new Node(-1);
  Node *twoTail = twoHead;

  Node *temp = head;
  vector<int> freq(3, 0);
  while (temp != nullptr){
    freq[temp->data]++;
    temp = temp -> next;
  }

  int zero = freq[0], one = freq[1], two = freq[2];
  while (zero > 0){
    Node *temp = new Node(0);
    if (zeroHead -> next == nullptr){  // first Node
      zeroHead -> next = temp;
      zeroTail = temp;
    }
    else {
      zeroTail -> next = temp;
      zeroTail = temp;
    }
    zero--;
  }
  zeroHead = zeroHead -> next;
  while (one > 0){
    Node *temp = new Node(1);
    if (oneHead -> next == nullptr){  // first Node
      oneHead -> next = temp;
      oneTail = temp;
    }
    else {
      oneTail -> next = temp;
      oneTail = temp;
    }
    one--;
  }
  oneHead = oneHead -> next;
  while (two > 0){
    Node *temp = new Node(2);
    if (twoHead -> next == nullptr){  // first Node
      twoHead -> next = temp;
      twoTail = temp;
    }
    else {
      twoTail -> next = temp;
      twoTail = temp;
    }
    two--;
  }
  twoHead = twoHead -> next;

  // link all
  zeroTail -> next = oneHead;
  oneTail -> next = twoHead;

  return zeroHead;
}

int main(){

  insert(1);
  insert(0);
  insert(2);
  insert(1);
  insert(2);

  printList(head);

  Node* temp = sortList3();
  printList(temp);

  return 0;
}
