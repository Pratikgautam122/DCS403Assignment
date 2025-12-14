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
    
    void search(int X) {
        Node* current = head;
        int position = 1;
        
        while (current != nullptr) {
            if (current->data == X) {
                cout << "Element " << X << " found at position " << position << endl;
                return;
            }
            current = current->next;
            position++;
        }
        
        cout << "Element " << X << " not found in the list!" << endl;
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
    int arr[] = {15, 25, 35, 45, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    list.createFromArray(arr, size);
    list.traverse();
    
    cout << "\nSearching for elements:" << endl;
    list.search(35);
    list.search(45);
    list.search(100);
    
    return 0;
}