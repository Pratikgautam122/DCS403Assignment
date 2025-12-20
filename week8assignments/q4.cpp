#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

Node* insertIter(Node* root, int key) {
    if (!root) return new Node(key);

    Node* curr = root;
    Node* parent = nullptr;

    while (curr) {
        parent = curr;
        if (key < curr->data) curr = curr->left;
        else if (key > curr->data) curr = curr->right;
        else return root;
    }

    if (key < parent->data)
        parent->left = new Node(key);
    else
        parent->right = new Node(key);

    return root;
}

int main() {
    Node* root = nullptr;
    root = insertIter(root, 10);
    root = insertIter(root, 5);
    root = insertIter(root, 15);

    cout << "Inserted 10 5 15\n";
}
 