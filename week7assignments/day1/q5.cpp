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
    
    void deleteByValue(int X) {
        if (head == nullptr) {
            cout << "List is empty! Cannot delete." << endl;
            return;
        }
        
        if (head->data == X) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted " << X << " from the list" << endl;
            return;
        }
        
        Node* current = head;
        while (current->next != nullptr && current->next->data != X) {
            current = current->next;
        }
        
        if (current->next == nullptr) {
            cout << "Element " << X << " not found in the list!" << endl;
            return;
        }
        
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << "Deleted " << X << " from the list" << endl;
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
    
    list.deleteByValue(30);
    list.traverse();
    
    list.deleteByValue(10);
    list.traverse();
    
    list.deleteByValue(50);
    list.traverse();
    
    list.deleteByValue(100);
    
    return 0;
}