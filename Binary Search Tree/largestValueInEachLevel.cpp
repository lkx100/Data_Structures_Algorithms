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

vector<int> largestValues(Node* root){

    vector <int> ans;
    queue <Node*> q;
    q.push(root);
    q.push(nullptr);
    int maxi = -1;
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if (temp == nullptr){
            ans.push_back(maxi);
            maxi = -1;
            if (!q.empty())
                q.push(nullptr);
        }
        else {
            if (temp -> data > maxi)
                maxi = temp -> data;
                
            if (temp -> left != nullptr)
                q.push(temp->left);
            
            if (temp -> right != nullptr)
                q.push(temp->right);
        }
    }
    return ans;
    }

int main() {

    Node* root = createTree();
    vector <int> largestValuesInEachLevel = largestValues(root);

    for (int it : largestValuesInEachLevel)
        cout << it << " ";
    cout << endl;
    
    return 0;
}