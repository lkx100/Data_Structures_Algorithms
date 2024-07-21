#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int data) {
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};

Node* createTree() {

    int data;
    cout << "Enter data: ";
    cin >> data;

    if (data == -1)
        return nullptr;

    Node* root = new Node(data);

    cout << "Enter left of " << data << ": ";
    root -> left = createTree();
    
    cout << "Enter right of " << data << "; ";
    root -> right = createTree();

    return root;
}

int height(Node* root, bool &valid) {
    if (root == nullptr)
        return 0;

    if (valid) {    
        int left = height(root->left, valid);
        int right = height(root->right, valid);

        if (abs(left-right) > 1)
            valid = 0;

        return max(left, right) + 1;
    }
}

bool isBalancedTree(Node* root) {
    bool valid = 1;
    height(root, valid);

    return valid;
}

int main(){
  
    Node* root = createTree();
    if (isBalancedTree(root)) cout << "Tree is Balanced" << endl;
    else cout << "Un-Balanced Tree" << endl;
    return 0;
}