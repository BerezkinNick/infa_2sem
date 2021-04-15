#include <iostream>
using namespace std;

struct Node {
    int value;
    Node * next = NULL;
};

struct List{
    size_t size = 0;
    Node * head = NULL;
    Node * tail = NULL;

    void push_back(int value)
    {
        if (head == NULL) {
            head = new Node;
            head -> value = value;
            tail = head;
            size = 1;
            return;
        }

        Node * new_node = new Node;
        tail->next = new_node;
        new_node->value = value;
        tail = new_node;
        ++size;
    }

    void clear_list()
    {
        while(head != NULL) {
            Node* next = head -> next;
            delete head;
            head = next;
        }
        size = 0;
    }
};


struct HashMap
{
    int key;
    int size = 100;
    int number = 0;
    List* list = new List[size]{};


    void reallocation()
    {
        List* new_list = new List[size * 2]{};
        for (int i = 0; i < size; i++){
            new_list[i] = list[i];
            list[i].clear_list();
        }
        delete [] list;
        list = new_list;
        size *= 2;
    }

    void add(int key)
    {number += 1;
        if ((float) size / number < 2)
            reallocation();
        int i = (key * (size - 1)) % size;
        list[i].push_back(key);
    }


    Node* get(int key)
    {   int i = (key * (size - 1)) % size;
        if (list[i].head != NULL)
        {
            Node* temp = list[i].head;
            while(temp -> value != key)
            {
                temp = temp -> next;
            }
            return temp;

        }
        else return NULL;
    }

    void pop(int key)
    { int i = (key * (size - 1)) % size; bool f;
        List a = list[i];
            Node* temp = a.head;
            while(temp -> next -> value != key & f) {temp = temp -> next;
                if (temp -> next == NULL)
                    f = false;}
            if (f == true){
                delete temp -> next;
                temp -> next = temp -> next -> next;}
    }
};

int main()
{


    return 0;
}