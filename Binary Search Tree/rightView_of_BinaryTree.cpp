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

void usingRecursion(Node* root, int level, vector<int> &ans) {
    // base case
    if (!root)
        return;
    if (level == ans.size()){
        // 1st time 
        ans.push_back(root -> data);
    }
    leftView_Using_Recursion(root -> right, level+1, ans);
    leftView_Using_Recursion(root -> left, level+1, ans);
}

void rightView(Node* root) {
    vector <int> ans;
    // Node* temp, *last;
    // queue <Node*> q;
    // q.push(root);
    // q.push(nullptr);
    
    // while (!q.empty()) {
    //     temp = q.front();
    //     q.pop();
        
    //     if (!temp) {
    //         ans.push_back(last->data);
    //         if (!q.empty())
    //             q.push(nullptr);
    //     }
    //     else {
    //         if (temp -> left)
    //             q.push(temp -> left);
    //         if (temp -> right)
    //             q.push(temp -> right);
    //         last = temp;
    //     }
    // }
    usingRecursion(root, 0, ans);
    return ans;
}

int main(){
  
    Node* root = createTree();
    
    vector<int> ans;
    vector<int> leftV = usingRecursion(root, 0, ans);

    return 0;
}