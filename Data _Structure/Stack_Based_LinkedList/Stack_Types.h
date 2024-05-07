#ifndef STACK_TYPES_H
#define STACK_TYPES_H

///structure for stack nodes
typedef struct stacknode
{
    ///define data in the node
    int                data;
    ///define pointer that points on next node
    struct stacknode*  next;
}Node;

///Define Stack itself
typedef struct Stack
{
    ///define the size of the stack
	int Size;
	///define the stack pointer that point to location to pop from it
    Node* sp;
}Stack;

#endif // STACK_TYPES_H
