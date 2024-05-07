#include <stdio.h>
#include "Stack_Types.h"

void Stack_Void_Init(Stack* St)
{
    ///initialize the size to zero
    St->Size=0;
    ///initialize the stack pointer to -1
    St->SP=-1;

}
int  Stack_Int_IsFull(Stack* St)
{
    int return_val=0;
    if((St->Size)==STACK_MAX_SIZE)
    {
        return_val=1;
    }
    return return_val;

}
int  Stack_Int_IsEmpty(Stack* St)
{
    int return_val=0;
    if((St->Size)==0)
    {
        return_val=1;
    }
    return return_val;

}
int  Stack_Int_Size(Stack* St)
{
    return (St->Size);
}
void Stack_Void_Print(Stack* St)
{
    ///counter to loop on stack elements
    int i=0;
    ///check if the stack not empty
    if((St->Size)==0)
    {
        printf("the stack is empty");
    }
    else
    {
        ///loop on each element and print it
        for(i=(St->Size)-1;i>=0; i--)
        {
            printf("%i\n",St->Array[i]);
        }
    }


}

void Stack_Void_Push(Stack* St,int input_data)
{
    ///check if the stack if full
    if((St->Size)==STACK_MAX_SIZE)
    {
        printf("the stack is full");
    }
    else
    {
        ///increment the value of stack pointer
        (St->SP)++;
        ///put the element on this position
        St->Array[St->SP]=input_data;
        ///increase stack size by 1
        (St->Size)++;
    }

}
void Stack_Void_Pop(Stack* St, int* return_data)
{
    ///check if the stack is empty
    if((St->Size)==0)
    {
        printf("the stack is empty");
    }
    else
    {
        ///return the top value
        *return_data=St->Array[St->SP];
        ///decrease stack pionter
        (St->SP)--;
        ///decrease stack size
        (St->Size)--;

    }

}
void Stack_Void_ReturnTopValue(Stack* St, int* return_data)
{

    ///check if the stack is empty
    if((St->Size)==0)
    {
        printf("the stack is empty");
    }
    else
    {
        ///return the top value
        *return_data=St->Array[St->SP];
    }

}
