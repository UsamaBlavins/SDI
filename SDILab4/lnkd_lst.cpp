
#include <iostream>

struct node {
 int data;
 node* next;
};

int main() {
 node *list, *first, *current, *last, *temp, *trail, *p, *q;
 list = new node;
 list->data = 47;
 temp = list;
 first = list;
 list = new node;
 list->data = 12;
 temp->next = list;
 temp = temp->next;
 list = new node;
 list->data = 92;
 temp->next = list;
 temp = temp->next;
 list = new node;
 list->data = 65;
 current = list;
 temp->next = list;
 temp = temp->next;
 list = new node;
 list->data = 80;
 temp->next = list;
 temp = temp->next;
 list = new node;
 list->data = 46;
 temp->next = list;
 temp = temp->next;
 list = new node;
 list->data = 17;
 temp->next = list;
 temp = temp->next;
 list = new node;
 list->data = 5;
 temp->next = list;
 temp = temp->next;
 list = new node;
 list->data = 78;
 last = list;
 temp->next = list;
 temp = temp->next;
 list->next = NULL;
 temp->next = list->next;
 return 0;
}
