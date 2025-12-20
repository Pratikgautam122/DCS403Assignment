#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

Node* insertRec(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data)
        root->left = insertRec(root->left, key);
    else if (key > root->data)
        root->right = insertRec(root->right, key);
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, x;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insertRec(root, x);
    }

    cout << "Inorder: ";
    inorder(root);
}
