#include <iostream>

struct Node {
    int data;
    Node* link;
};

int main() {
    Node* head=nullptr ;
    head = new Node(); // Allocate memory for the node

    head->data = 45;
    head->link = nullptr;

    std::cout << head->data << std::endl;
    std::cout << head->link << std::endl;

    // Remember to deallocate the memory when you're done!
    delete head; 

    return 0;
}