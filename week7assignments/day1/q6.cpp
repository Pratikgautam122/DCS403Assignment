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
    
    void deleteAtPosition(int position) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        
        if (position < 1) {
            cout << "Invalid position!" << endl;
            return;
        }
        
        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position " << position << endl;
            return;
        }
        
        Node* current = head;
        for (int i = 1; i < position - 1 && current != nullptr; i++) {
            current = current->next;
        }
        
        if (current == nullptr || current->next == nullptr) {
            cout << "Position " << position << " is out of bounds!" << endl;
            return;
        }
        
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << "Deleted node at position " << position << endl;
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
    
    list.deleteAtPosition(3);
    list.traverse();
    
    list.deleteAtPosition(1);
    list.traverse();
    
    list.deleteAtPosition(10);
    
    return 0;
}