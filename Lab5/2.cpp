#include <iostream>
#include <string>
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

int main(){
    string s;
    int x;
    Node* num_list = NULL;
    while (cin >> s){
        if (s == "+"){
            x = pop(&num_list);
            num_list->value += x;
        }
        else if (s == "-"){
            x = pop(&num_list);
            num_list->value -= x;
        }
        else if (s == "*"){
            x = pop(&num_list);
            num_list->value *= x;
        }
        else if (s == "/"){
            x = pop(&num_list);
            num_list->value /= x;
        }
        else {
            push_left(&num_list, stoi(s));
        }
    }
    cout << num_list->value;
    clear_list(&num_list);
    return 0;
}