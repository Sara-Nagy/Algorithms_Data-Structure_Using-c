#include <stdio.h>
#include "Stack_Types.h"

void Stack_Void_Init(Stack* St)
{
    ///initialize the size to zero
    St->Size=0;
    ///initialize the stack pointer to NULL
    St->sp=NULL;

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
    ///temp pointer that points to nodes of the stack
    Node *temp=St->sp;
    ///check if the stack not empty
    if((St->Size)==0)
    {
        printf("the stack is empty");
    }
    else
    {
        ///loop on each element and print it
        for(i=0;i<(St->Size);i++)
        {
            printf("%i\n",temp->data);
            temp=temp->next;
        }
    }


}

void Stack_Void_Push(Stack* St,int input_data)
{
        ///create the node to be pushed
        Node * node=(Node*)malloc(sizeof(Node));
        ///put the data in the node
        node->data=input_data;
        ///make the next of the created node hold the value of stack
        node->next=St->sp;
        ///make stack pointer points to that node
        St->sp=node;
        ///increment stack size
        (St->Size)++;

}
void Stack_Void_Pop(Stack* St, int* return_data)
{
    ///counter that loop on nodes
    int i=0;
    ///temp pointer that hold the value of stack pointer
    Node *temp;
    ///check if the stack is empty
    if((St->Size)==0)
    {
        printf("the stack is empty");
    }
    else
    {
        ///return data from node
        *return_data=St->sp->data;
        ///save the address of next node
        temp=St->sp->next;
        ///delete first node
        free(St->sp);
        ///make stack pointer points to second node
        St->sp=temp;
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

        ///return data from node
        *return_data=St->sp->data;
    }

}
