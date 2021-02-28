#include <iostream>

struct Node {
    int value;
    struct Node *next;
};

void clear_list(Node ** head) {
    Node * p_node = new Node;
    p_node = *head;
    delete [] *head;
    if (p_node->next != NULL) {*head = p_node;}
    else (*head = NULL);
}

void push_back(Node** head, int value) {
    if (*head == NULL) {
        *head = new Node;
        (*head)->value = value;
        (*head)->next = NULL;
        return;
    }

    Node *p_node = *head;
    while (p_node->next != NULL) {
        p_node = p_node->next;
    }
}
int main() {
    Node* list = NULL;
    for (int i = 1; i <= 10; ++i) {
        push_back(&list, i);
        push_back(&list, i % 2);
    }
    clear_list(&list);
    return 0;
}
