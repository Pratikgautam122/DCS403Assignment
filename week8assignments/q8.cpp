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

Node* searchRec(Node* root, int key) {
    if (!root || root->data == key) return root;
    if (key < root->data)
        return searchRec(root->left, key);
    return searchRec(root->right, key);
}

Node* findMin(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* t = root->right;
            delete root;
            return t;
        }
        if (!root->right) {
            Node* t = root->left;
            delete root;
            return t;
        }
        Node* t = findMin(root->right);
        root->data = t->data;
        root->right = deleteNode(root->right, t->data);
    }
    return root;
}

int main() {
    Node* root = nullptr;
    int n, x, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insertRec(root, x);
    }

    cout << "Enter key to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "Enter key to search: ";
    cin >> searchKey;

    if (searchRec(root, searchKey))
        cout << "Key found after deletion.\n";
    else
        cout << "Key not found after deletion.\n";

    return 0;
}
