#include <bits/stdc++.h>
using namespace std;

class Node{

    public: 
        int data;
        Node* left;
        Node* right;

    Node(int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* createTree() {

    int data;
    // cout << "Enter data: ";
    cin >> data;

    if (data == -1)
        return nullptr;

    Node* temp = new Node(data);

    // cout << "Enter left of " << temp -> data << ": ";
    temp -> left = createTree();

    // cout << "Enter right of " << temp -> data << ": ";
    temp -> right = createTree(); 

    return temp;
}

vector<int> preOrder(Node* root) {
    // We need a stack, since recursion also uses internal stacking method 
    stack <Node*> s;
    vector <int> ans;
    s.push(root);

    while (!s.empty()) {
        Node* temp = s.top();
        s.pop();
        ans.emplace_back(temp -> data);

        if (temp -> right)
            s.push(temp -> right);
        if (temp -> left)
            s.push(temp -> left);
    } 
    return ans;
}

vector<int> postOrder(Node* root) {
    stack <Node*> s;
    vector <int> ans;
    s.push(root);

    while (!s.empty()) {
        Node* temp = s.top();
        s.pop();
        ans.emplace_back(temp -> data);

        if (temp -> left)
            s.push(temp -> left);
        if (temp -> right)
            s.push(temp -> right);
    } 
    return ans;
}

void inOrder(Node* root)  {

}

void reverse(vector<int> &v) {
    int i = 0, j = v.size()-1;
    while (i < j) 
        swap(v[i++], v[j--]);
}

int main() {

    Node* root = createTree();

    vector <int> pre = preOrder(root);
    cout << "PRE ORDER: ";
    for (int i : pre) cout << i << " ";
    cout << endl;

    vector <int> post = postOrder(root);
    reverse(post);   // Post Oder is reverse of N R L
    cout << "POST ORDER: ";
    for (int i : post) cout << i << " ";
    cout << endl;

    vector <int> in = inOrder(root);
    cout << "IN ORDER: ";
    for (int i : in) cout << i << " ";
    cout << endl;

    return 0;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1