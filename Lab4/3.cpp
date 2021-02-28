#include <iostream>
using namespace std;

struct Node {
    int value;
    struct Node *next;
};

int pop(Node** head, int index)
{
    if (*head == NULL){
        return INT_MIN;
    }
    Node* pop_node = *head;
    if (index == 0){
        Node* p = *head;
        *head = (**head).next;
        delete p;
    }
    else{
        for (int i = 1; i < index; i++){
            pop_node = (*pop_node).next;
            if ((*pop_node).next == NULL){
                cout << "Error" << '\n';
                return INT_MIN;
            }
        }
        Node* memory = (*pop_node).next;
        (*pop_node).next = (*memory).next;
        delete memory;
    }
    return (*pop_node).value;
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

void push_left(Node** head, int value)
{
    if (*head == NULL){
        *head = new Node;
        (**head).value = value;
        (**head).next = NULL;
        return;
    }
    Node* new_node = new Node;
    (*new_node).value = value;
    (*new_node).next = *head;
    *head = new_node;
}

int main()
{
    Node* list = NULL;
    for (int i = 0; i <= 10; ++i){ push_left(&list, i);
    }
    print_list(list);
    cout << "Print index: ";
    int index;
    cin >> index;
    pop(&list, index) << '\n';
    print_list(list);
    return 0;
}