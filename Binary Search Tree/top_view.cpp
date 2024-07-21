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

void find(Node* root, int pos, int &l, int &r) {
    if (root == nullptr)
        return;
    
    l = min(l, pos);
    r = max(r, pos);
    
    find(root->left, pos-1, l, r);
    find(root->right, pos+1, l, r);
}

void top_view_recursion(Node* root, int pos, vector<int> &ans, vector<int> &level, int curr_level) {
    if (root == nullptr)
        return;

    if (curr_level < level[pos]) {
        ans[pos] = root -> data;
        level[pos] = curr_level;
    }
    top_view_recursion(root->left, pos-1, ans, level, curr_level+1);
    top_view_recursion(root->right, pos+1, ans, level, curr_level+1);
}

void using_recursion() {
    int l = 0, r = 0;
    // update l & r value
    find(root, 0, l, r);
    // using this find(), we will get l (left-most node) & r (right-most node)

    vector<int> ans(r-l+1);

    vector<int> level(r-l+1, INT_MAX);  // If 2 or more nodes are at same pos, then
    // the minimum level will get the place, rest will be ignored

    top_view_recursion(root, -1*l, ans, level, 0);  // update the ans vector
    // -1*l will tell the index / pos of the root node, 
    // lets say, root node's pos is 4, then :- 1,  2,  3,  4,  5,  6,  7.
    //                                         l   l   l  root r   r   r

    return ans;
}
vector<int> topView(Node *root) {
    int l = 0, r = 0;
    // update l & r value
    find(root, 0, l, r);
    
    vector<int> ans(r-l+1);
    vector<bool> filled(r-l+1, 0);
    
    queue <Node*> q;
    queue <int> index;
    
    q.push(root);
    index.push(-1*l);
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        int pos = index.front();
        index.pop();
        if (!filled[pos]) {
            filled[pos] = 1;
            ans[pos] = temp->data;
        }
        
        if (temp->left){
            q.push(temp->left);
            index.push(pos-1);
        }
        if (temp->right){
            q.push(temp->right);
            index.push(pos+1);
        }
    }
    return ans;
}

int main(){
  
    Node* root = createTree();
    
    return 0;
}