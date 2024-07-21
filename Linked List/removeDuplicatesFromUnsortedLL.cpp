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
  if (head == nullptr) {
    cout << "\nNo List\n";
    return;
  }

  Node *temp = x;
  cout << "\nList: ";
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

// Brute Force -> O(n^2)
Node *removeDuplicates1() {
  if (head == nullptr)
    return nullptr;

  Node *curr = head;
  Node *runner;

  while (curr != nullptr) {
    int lastNode = 0;
    runner = curr;
    while (runner->next != nullptr) {
      if (curr->data == runner->next->data) {
        Node *del = runner->next;
        if (del->next == nullptr)
          lastNode = 1;
        runner->next = del->next;
        delete del;
        if (lastNode)
          break;
      } else
        runner = runner->next;
    }
    curr = curr->next;
  }
  return head;
}

// Optimized Approach -> O(n)
Node *removeDuplicates2() {
  if (head == nullptr)
    return nullptr;

  map<int, bool> visited;
  Node *temp = head;
  Node *prev = head;
  while (temp->next != nullptr) {
    if (visited[temp->data] == true) {
      prev->next = temp->next;
      delete temp;
      temp = prev->next;
      if (temp == nullptr)
        break;
    } else {
      visited[temp->data] = true;
      prev = temp;
      temp = temp->next;
    }
  }
  return head;
}

int main() {
  insert(1);
  insert(2);
  insert(2);
  insert(3);
  insert(4);
  insert(4);
  insert(5);
  printList(head);
  Node *newHead = removeDuplicates1();
  printList(newHead);
}
