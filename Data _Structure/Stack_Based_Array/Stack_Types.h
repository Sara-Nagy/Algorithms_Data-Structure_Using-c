#ifndef STACK_TYPES_H
#define STACK_TYPES_H
///define the max size of the stack
#define STACK_MAX_SIZE   100
///data type of the stack
typedef struct Stack
{
    ///define the number of the elements in the stack
    int Size;
    ///create the array that hold stack elements
    int Array[STACK_MAX_SIZE];
    ///stack pointer that points to the index of available location to pop from it
    int SP;//
}Stack;
#endif // STACK_TYPES_H
