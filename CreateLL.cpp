#include <iostream>

struct Node {
    int data;
    Node* link;
};

int main() {
    Node* head = new Node; // Allocate memory for the first node
    head->data = 45;
    head->link = nullptr;

    Node* current = new Node; // Allocate memory for the second node
    current->data = 98;
    current->link = nullptr;
    head->link = current; // Link the first node to the second node

    current = new Node; // Allocate memory for the third node
    current->data = 3;
    current->link = nullptr;
    head->link->link = current; // Link the second node to the third node

    // Print the linked list (for verification)
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->link;
    }
    std::cout << std::endl;

    // Deallocate memory (important!)
    Node* temp2 = head;
    while (temp2 != nullptr) {
        Node* next = temp2->link;
        delete temp2;
        temp2 = next;
    }

    return 0;
}