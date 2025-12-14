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
    
    int countNodes() {
        int count = 0;
        Node* current = head;
        
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        
        return count;
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
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    list.createFromArray(arr, size);
    list.traverse();
    
    int nodeCount = list.countNodes();
    cout << "Total number of nodes: " << nodeCount << endl;
    
    LinkedList emptyList;
    cout << "\nEmpty list node count: " << emptyList.countNodes() << endl;
    
    return 0;
}