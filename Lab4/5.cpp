#include <iostream>
using namespace std;

struct Node {
    int value;
    struct Node *next;
};

void remove_all(Node** head, int value)
{
    int k = 0;
    if (*head == NULL){
        return;
    }
    while((**head).value == value){
        if ((**head).next != NULL){
            Node* p = *head;
            *head = (**head).next;
            delete p;
            k++;
        }
        else{
            delete *head;
            k++;
            *head = NULL;
            return;
        }
    }
    Node* remove_node = *head;
    while ((*remove_node).next != NULL){
        if ((*(*remove_node).next).value == value){
            Node* p = (*remove_node).next;
            (*remove_node).next = (*p).next;
            delete p;
            k++;
        }
        else{
            remove_node = (*remove_node).next;
        }
    }
    return;
}

void push_left(Node ** head, int value) {
    if (*head == NULL) {
        *head = new Node;
        (*head)->value = value;
        (*head)->next = NULL;
    }

    Node * new_node = new Node;
    new_node->value = value;
    new_node->next = *head;
    *head = new_node;
}

void print_list(Node * head)
{
    Node * p_node = head;
    while (p_node->next != NULL) {
        cout << p_node->value << ' ';
        p_node = p_node->next;
    }
    std::cout << '\n';
}

int main(int argc, char const *argv[]) {
    Node *list = NULL;
    for (int i = 1; i <= 10; ++i) {push_left(&list, i);
    push_left(&list, i);
    }
    print_list(list);
    int x;
    cin >> x;
    remove_all(&list, x);
    print_list(list);
}
