#include <iostream>
using namespace std;

struct Node {
    int value;
    struct Node *next;
};

void remove(Node ** head, int value)
{
    Node * p_node = *head;
    Node * p_node_prev = *head;
    while (true) {
        if (p_node->value == value) {
            p_node_prev->next = p_node->next;
            delete [] p_node;

            break;
        }
        p_node_prev = p_node;
        p_node = p_node->next;
    }
}

void push_left(Node** head, int value) {
    if (*head == NULL) {
        *head = new Node;
        (*head)->value = value;
        (*head)->next = NULL;
        return;
    }

    Node* new_node = new Node;
    new_node->next = *head;
    new_node->value = value;
    *head = new_node;
}

void print_list(Node * head)
{
    Node * p_node = head;
    while (p_node->next != NULL) {
        cout << p_node->value << ' ';
        p_node = p_node->next;
    }
    cout << '\n';
}


int main(int argc, char const *argv[])
{
    Node * list = NULL;
    for (int i = 1; i <= 10; ++i) push_left(&list, i);
    print_list(list);
    remove(&list, 8);
    print_list(list);
    return 0;
}