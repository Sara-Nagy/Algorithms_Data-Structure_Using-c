#ifndef STACK_H
#define STACK+H

#include "Stack_Types.h"

void Stack_Void_Init(Stack* St);
void Stack_Void_Push(Stack* St,int input_data);
void Stack_Void_Pop(Stack* St, int* return_data);
void Stack_Void_ReturnTopValue(Stack* St, int* return_data);
int  Stack_Int_IsFull(Stack* St);
int  Stack_Int_IsEmpty(Stack* St);
int  Stack_Int_Size(Stack* St);
void Stack_Void_Print(Stack* St);
#endif // STACK_H
