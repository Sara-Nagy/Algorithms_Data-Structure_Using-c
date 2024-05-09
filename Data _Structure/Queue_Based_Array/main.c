#include <stdio.h>
#include "Queue.h"
int main()
{
    int choice,return_data,input_data;
    ///create the Queue
    Queue Q;
    ///initialize the Queue
    Queue_voidInit(&Q);

    while(1)
    {
        printf("please enter your choice:\n");
        printf("if you want to add data choose 1:\n");
        printf("if you want to remove data choose 2:\n");
        printf("if you want to print data choose 3:\n");
        printf("if you want to get the number of data choose 4:\n");
        printf("if you want to exit from the program choose 5:\n");
        scanf("%i",&choice);
        printf("\n");
        switch(choice)
        {
        case 1:
             printf("please enter the value:");
             scanf("%i",&input_data);
             Queue_voidEnQueue(&Q,input_data);
            break;
        case 2:
            Queue_voidDeQueue(&Q,&return_data);
            printf("the value is:%i",return_data);
            break ;
        case 3:
            if(Queue_intIsEmpty(&Q)==1)
            {
                printf("queue is empty\n");
            }
            else
            {
              Queue_voidPrint(&Q);
            }
            break ;
        case 4:
            if(Queue_intIsEmpty(&Q)==1)
            {
                printf("queue is empty\n");
            }
            else
            {
                printf("the number of queue elements=%i",Queue_intSize(&Q));
            }
            break ;
        case 5:
            exit(0);
            break;
        default:
            printf("wrong choice\n");
        }
        printf("\n");
    }
    return 0;

}
