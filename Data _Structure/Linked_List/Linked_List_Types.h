#ifndef LINKED_LIST_TYPES_H
#define LINKED_LIST_TYPES_H

///Node
typedef struct node
{
    ///1-the data to be stored in the node
    int data;
    ///2-the pointer that point to the next node
    struct node * next;
}Node;

///List
typedef struct list_of_nodes
{
    ///1-define the numbers of node in the list
    int Size;
    ///2-the pointer that points to first node
    Node *head;
}List;








#endif // LINKED_LIST_TYPES_H
