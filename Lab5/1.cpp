#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

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

int pop(Node** head)
{
    int val;
    Node* p_node = *head;
    val = p_node->value;
    (*head) = p_node->next;
    delete p_node;
    return val;
}

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

int main()
{
    Node* list = NULL;
    int i;
    cin >> i;
    int depth = 0, value;
    while (i != 0){
        if (i > 0){
            push_left(&list, i);
            ++depth;}

            else if ((((list->value)*(list->value) - i*i) > 0 ) & (depth != 0)){
                list->value += i;
            }

            else if ((((list->value)*(list->value) - i*i) <= 0 ) & (depth != 0)){
                pop(&list);
                --depth;
            }
            cin>>i;
        }
    if (depth == 0){
        value = -1;
    }
        else value = list->value;

    cout << depth << " " << value;
    clear_list(&list);
    return 0;
}
