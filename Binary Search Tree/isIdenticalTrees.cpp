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

vector <int> makeVectorR1(Node* r1) {
    queue <Node*> q;
    vector <int> ans1;
    q.push(r1);
    q.push(nullptr);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp == nullptr) {
            ans1.push_back(-1);
            if (!q.empty()) q.push(nullptr);
        }
        else {
            ans1.push_back(temp->data);
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
    return ans1;
}

vector <int> makeVectorR2(Node* r2) {
    queue <Node*> q;
    vector <int> ans2;
    q.push(r2);
    q.push(nullptr);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp == nullptr) {
            ans2.push_back(-1);
            if (!q.empty()) q.push(nullptr);
        }
        else {
            ans2.push_back(temp->data);
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
    return ans2;
}

bool isIdentical(Node *r1, Node *r2){

    vector <int> ans1 = makeVectorR1(r1);
    vector <int> ans2 = makeVectorR2(r2);
    int s1 = ans1.size();
    int s2 = ans2.size();
    if (s1 != s2) 
        return false;
    for (int i = 0; i < s1; i++){
        if (ans1[i] != ans2[i])
            return false;
    }
    return true;
}

bool areIdenticalTrees(Node* r1, Node* r2) {
    if (r1 == nullptr and r2 == nullptr)
            return 1;

    if ((r1 != nullptr && r2 == nullptr) or (r1 == nullptr && r2 != nullptr))
        return 0;

    if (r1->data != r2->data)
        return 0;
    
    return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
}

int main() {

    Node* root1 = createTree();
    Node* root2 = createTree();

    if (isIdentical(root1, root2)) cout << "Yes, They are Identical" << endl;
    else cout << "Not Identical" << endl;
    return 0;
}