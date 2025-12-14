#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    
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
    
    void insertAfter(int X, int Y) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        
        Node* current = head;
        
        while (current != nullptr && current->data != X) {
            current = current->next;
        }
        
        if (current == nullptr) {
            cout << "Value " << X << " not found in the list!" << endl;
            return;
        }
        
        Node* newNode = new Node{Y, current->next};
        current->next = newNode;
        cout << "Inserted " << Y << " after " << X << endl;
    }
    
    void traverse() {
        Node* current = head;
        cout << "List: ";
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
    cout << "Original ";
    list.traverse();
    
    list.insertAfter(30, 35);
    list.traverse();
    
    list.insertAfter(10, 15);
    list.traverse();
    
    list.insertAfter(50, 60);
    list.traverse();
    
    list.insertAfter(100, 200);
    
    return 0;
}