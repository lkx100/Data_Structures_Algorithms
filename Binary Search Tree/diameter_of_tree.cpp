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

int height_of_tree(Node* root) {  // O(N)
    if (root == nullptr)
        return 0;

    int left = height_of_tree(root -> left);
    int right = height_of_tree(root -> right);

    int ans = max(left, right) + 1;
    return ans;
}

int diameterOfTree(Node* root) {  // O(N^2) :- O(diameter(height()))

    if (root == nullptr)
        return 0;

    int left_max = diameterOfTree(root -> left);
    int right_max = diameterOfTree(root -> right);
    int combo_max = height_of_tree(root -> left) + height_of_tree(root -> right) + 1;

    int either_max = max(left_max, right_max);
    int ans = (either_max, combo_max);
    return ans;
}

int main() {

    Node* root = createTree();
    cout << diameterOfTree(root) << endl;
    return 0;
}