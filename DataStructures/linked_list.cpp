#include <iostream>

class Node {
public:
    int value;
    Node* next;
};

int main() {
    Node* head;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    one = new Node();
    two = new Node();
    three = new Node();

    one->value = 1;
    two->value = 2;
    three->value = 3;

    one->next = two;
    two->next = three;
    three->next = nullptr;

    head = one;
    while (head != nullptr) {
        std::cout << head->value << " ";
        head = head->next;
    }

    // Deallocate memory
    delete one;
    delete two;
    delete three;

    return 0;
}
