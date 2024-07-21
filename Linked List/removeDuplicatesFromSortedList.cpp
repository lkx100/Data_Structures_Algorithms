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

vector<int> detectDuplicates() {
  vector<int> duplicates;
  if (head == nullptr)
    return {};

  int detect = 0;
  Node *temp = head;
  while (temp->next != nullptr) {
    // check for duplicates
    if (temp->data == (temp->next)->data)
      detect = 1;
    else
      detect = 0;
    // if found, then collect them
    if (detect) {
      duplicates.push_back(temp->data);
      detect = 0;
    }
    temp = temp->next;
  }
  if (duplicates.empty())
    return {};
  else
    return duplicates;
}

Node *removeDuplicates() {
  if (head == nullptr)
    return nullptr;

  Node *temp = head;
  while (temp->next != nullptr) {
    if ((temp->data) == (temp->next)->data) { // same data
      // link to next's next node
      Node *join = (temp->next)->next;
      temp->next = join;
      join -> next = nullptr;
      if (join == nullptr)
        break;
    }
    temp = temp->next;
  }
  return head;
}

int main() {
  insert(1);
  insert(2);
  // insert(2);
  insert(2);
  insert(3);
  printList(head);
  vector<int> duplicates = detectDuplicates();
  if (duplicates.empty())
    cout << "No Duplicates" << endl;
  else {
    cout << "\nDuplicates: ";
    for (auto i : duplicates)
      cout << i << " ";
    cout << endl;
  }
  Node *ans = removeDuplicates();
  printList(ans);
  return 0;
}
