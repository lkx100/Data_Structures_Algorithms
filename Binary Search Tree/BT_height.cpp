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
    
    cout << "Enter right of " << data << ": ";
    root -> right = createTree();

    return root;
}

int height_of_tree(Node* Root){
    int depth = 0;
    if (Root == nullptr)
        return depth;
            
    queue <Node*> q;
    q.push(Root);
    q.push(nullptr);
    depth++;
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp == nullptr) {
            // cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
                depth++;
            }
        }
        else {
            if (temp -> left != nullptr)
                q.push(temp -> left);
            if (temp -> right != nullptr)
                q.push(temp -> right);
        }
    }
    return depth;
}

int getTreeHeight(Node* root) {

    if (root == nullptr)
        return 0;

    // int left = getTreeHeight(root -> left);
    // int right = getTreeHeight(root -> right);

    // int ans = max(left, right) + 1;

    // return ans;
    // OR
    return 1 + max(getTreeHeight(root -> left), getTreeHeight(root -> right));
}

int main() {

    Node* root = createTree();
    cout << height_of_tree(root) << endl;
    cout << getTreeHeight(root) << endl;
    return 0;
}