#include <iostream>

struct Node {
    int value;
    struct Node *next;
};

void clear_list(Node** head) {
    Node* old_node = *head;
    Node* new_node = (*head)->next;
    while (new_node != NULL)
    {
        delete old_node;
        old_node = new_node;
        new_node = old_node->next;
    }

    delete old_node;
    *head = NULL;
}



void push_back(Node** head, int value)
{
    if (*head == NULL) {
        *head = new Node;
        (*head)->value = value;
        (*head)->next = NULL;
        return;
    }

    Node* p_node = *head;
    while (p_node->next != NULL) {
        p_node = p_node->next;
    }

    Node* new_node = new Node;
    p_node->next = new_node;
    new_node->value = value;
    new_node->next = NULL;
}

int main() {
    Node* list = NULL;
    for (int i = 1; i <= 10; ++i) {
        push_back(&list, i);
    }
    clear_list(&list);
    return 0;
}
