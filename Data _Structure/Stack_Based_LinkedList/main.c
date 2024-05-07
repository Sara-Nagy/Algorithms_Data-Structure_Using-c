#include <stdio.h>
#include "Stack.h"
int main()
{
    int pushed_data,poped_data;
    ///create the stack
     Stack ST;
    ///initialize the stack
    Stack_Void_Init(&ST);
    int choice,popped_value,pushed_value;
    while(1)
    {
        printf("please enter your choice:\n");
        printf("if you want to push data choose 1:\n");
        printf("if you want to pop data choose 2:\n");
        printf("if you want to print data choose 3:\n");
        printf("if you want to get the top data choose 4:\n");
        printf("if you want to get the number of data choose 5:\n");
        printf("if you want to exit from the program choose 6:\n");
        scanf("%i",&choice);
        printf("\n\n");
        switch(choice)
        {
        case 1:
            printf("please enter the value to be pushed:");
            scanf("%i",&pushed_data);
            Stack_Void_Push(&ST,pushed_data);
            break;
        case 2:
            Stack_Void_Pop(&ST,&poped_data);
            printf("the data is: %i\n",poped_data);
            break;
        case 3:
            Stack_Void_Print(&ST);
            break;
        case 4:
           Stack_Void_ReturnTopValue(&ST,&poped_data);
           printf("the top value is:%i\n",poped_data);
            break;
        case 5:
            printf("the number of elements in stack is:%i\n",Stack_Int_Size(&ST));
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("wrong choice\n");
        }

    }
    return 0;
}
