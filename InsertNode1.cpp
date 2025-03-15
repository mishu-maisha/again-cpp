#include <iostream>
#include <cstdlib>

// Define the structure of a node in the linked list
struct Node {
    int data;
    Node* link; // Pointer to the next node
};

// Function to add a new node at the end of the linked list
void add_at_end(Node* head, int data) {
    Node* ptr = head; // Start from the head of the list
    Node* temp = new Node; // Create a new node

    // Assign data to the new node and set its link to NULL
    temp->data = data;
    temp->link = nullptr;

    // Traverse the list until the last node is found
    while (ptr->link != nullptr) {
        ptr = ptr->link;
    }

    // Link the last node to the new node
    ptr->link = temp;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head->link; // Start from the first actual node (skip dummy head)

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->link;
    }
    std::cout << std::endl;
}

// Function to deallocate the memory used by the linked list
void deleteList(Node* head) {
    Node* current = head;
    Node* next;

    while (current != nullptr) {
        next = current->link;
        delete current;
        current = next;
    }
}

int main() {
    // Create a dummy head node (optional, but simplifies the code)
    Node* head = new Node;
    head->link = nullptr; // Initialize the list as empty

    // Add a node with data 67 at the end of the list
    add_at_end(head, 67);

    // Add more nodes (for demonstration)
    add_at_end(head, 88);
    add_at_end(head, 99);

    // Print the list
    std::cout << "Linked List: ";
    printList(head);

    // Deallocate memory
    deleteList(head);

    return 0;
}