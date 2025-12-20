#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

Node* findMin(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Node* findMax(Node* root) {
    while (root && root->right)
        root = root->right;
    return root;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);

    cout << "Min: " << findMin(root)->data << endl;
    cout << "Max: " << findMax(root)->data << endl;
}
