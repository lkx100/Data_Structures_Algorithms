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

void leftView_Using_Recursion(Node* root, int level, vector <int> &ans) {
    // base case
    if (!root)
        return;
    if (level == ans.size()){
        // 1st time 
        ans.push_back(root -> data);
    }
    leftView_Using_Recursion(root -> left, level+1, ans);
    leftView_Using_Recursion(root -> right, level+1, ans);
} 

vector<int> leftView(Node *root) {
   // Your code here
    if (root == nullptr)
        return {};
    
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    int a = 1;
    while (!q.empty()) { 
        Node* temp = q.front();
        q.pop();
        if (!temp) {
            a = 1;  // prev level is done !
            if (!q.empty())
                q.push(nullptr);
        }   
        else {
            if (a == 1)
                ans.push_back(temp->data);
            //  data insertion
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
            a++;
        }
    }

    // ALITER

    // while (!q.empty()) {
    //     int n = q.size();
    //     ans.push_back(q.front()->data);
    //     while (n--) {
    //         Node* temp = q.front();
    //         q.pop();
    //         if (temp -> left)
    //             q.push(temp -> left);
    //         if (temp -> right)
    //             q.push(temp -> right);
    //     }
    // }
   return ans;  
}

int main(){
  
    Node* root = createTree();
    
    vector<int> ans = leftView(root);
    vector<int> a;
    vector<int> ans1 = leftView_Using_Recursion(root, 0, a);
    for (int it : ans)
        cout << it << " ";
    cout << endl;

    return 0;
}