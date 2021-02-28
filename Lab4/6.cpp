#include <iostream>
using namespace std;

struct Node {
    int value;
    struct Node *next;
};

void replace_all(Node* head, int old_value, int new_value)
{
    if (head != NULL){
        Node* node = head;
        while ((*node).next != NULL){
            if ((*node).value == old_value){
                (*node).value =  new_value;
            }
            node = (*node).next;
            if ((*node).value == old_value){
                (*node).value = new_value;
            }
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
        std::cout << p_node->value << ' ';
        p_node = p_node->next;
    }
    std::cout << '\n';
}

int main(int argc, char const *argv[]) {
    Node *list = NULL;
    for (int i = 1; i <= 10; ++i) {push_left(&list, i);
        push_left(&list, i);}
    print_list(list);
    int x, y;
    cout << "Print old value";
    cin >> x;
    cout << "Print new value";
    cin >> y;
    replace_all(list, x, y);
    print_list(list);
}