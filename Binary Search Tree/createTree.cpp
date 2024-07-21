#include <bits/stdc++.h>
using namespace std;

class Node {

public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
};

Node *createTree() {

  int data;
  cout << "Enter data: ";
  cin >> data;

  if (data == -1)
    return nullptr;

  Node *root = new Node(data);

  cout << "Enter left of " << data << ": ";
  root->left = createTree();

  cout << "Enter right of " << data << "; ";
  root->right = createTree();

  return root;
}

void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();

    if (temp == NULL) {
      // previous level complete traversal done
      cout << endl;
      // after checking NULL, check if queue is still empty ?
      // if no, then push NULL, to get next line
      if (!q.empty()) {
        // queue still has some child nodes
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";

      if (temp->left != NULL)
        q.push(temp->left);

      if (temp->right != NULL)
        q.push(temp->right);
    }
  }
}

int sumOfNodes(Node *root) {
  if (root == nullptr)
    return 0;

  return (root->data) + sumOfNodes(root->left) + sumOfNodes(root->right);
}

int countNodes(Node *root) {
  if (root == nullptr)
    return 0;

  return 1 + countNodes(root->left) + countNodes(root->right);
}

int noOfLeaves(Node *root) {
  if (root == nullptr)
    return 0;

  if (root->left == nullptr and root->right == nullptr)
    return 1;

  return noOfLeaves(root->left) + noOfLeaves(root->right);
}

int noOfNonLeaves(Node *root) {
  if (root == nullptr)
    return 0;

  if (root->right == nullptr and root->left)
    return 0;

  return 1 + noOfNonLeaves(root) + noOfNonLeaves(root);
}

void inOrderTraversal(Node *root) { // L N R

  // base case
  if (root == nullptr)
    return;

  // L : Go Left
  inOrderTraversal(root->left);
  // N : Print Node
  cout << root->data << " ";
  // R : Go Right
  inOrderTraversal(root->right);
}

void preOderTraversal(Node *root) { // N L R
  if (root == nullptr)
    return;

  // N : Print Node
  cout << root->data << " ";
  // L : Go Left
  preOderTraversal(root->left);
  // R : Go Right
  preOderTraversal(root->right);
}

void postOderTraversal(Node *root) { // L R N
  if (root == nullptr)
    return;

  // L : Go Left
  postOderTraversal(root->left);
  // R : Go Right
  postOderTraversal(root->right);
  // N : Print Node
  cout << root->data << " ";
}

int main() {

  Node *root = createTree();

  levelOrderTraversal(root);
  cout << endl;

  inOrderTraversal(root);
  cout << endl;

  preOderTraversal(root);
  cout << endl;

  postOderTraversal(root);
  cout << endl;

  cout << "Total No of Nodes in this tree is " << countNodes(root) << endl;
  cout << "Sum of elements in tree is " << sumOfNodes(root) << endl;
  cout << "Total No of Leaves are " << noOfLeaves(root) << endl;

  return 0;
}
