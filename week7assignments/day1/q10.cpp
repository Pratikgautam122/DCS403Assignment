#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    
    void printReverseHelper(Node* node) {
        if (node == nullptr) {
            return;
        }
        
        printReverseHelper(node->next);
        cout << node->data << " ";
    }
    
public:
    LinkedList() : head(nullptr) {}
    
    void createFromArray(int arr[], int size) {
        if (size == 0) return;
        head = new Node{arr[0], nullptr};
        Node* current = head;
        for (int i = 1; i < size; i++) {
            current->next = new Node{arr[i], nullptr};
            current = current->next;
        }
    }
    
    void printReverse() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        
        cout << "List in reverse order: ";
        printReverseHelper(head);
        cout << endl;
    }
    
    void traverse() {
        Node* current = head;
        cout << "List in normal order: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
    
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    list.createFromArray(arr, size);
    list.traverse();
    list.printReverse();
    
    cout << "\nNote: The original list structure is not modified." << endl;
    list.traverse();
    
    return 0;
}