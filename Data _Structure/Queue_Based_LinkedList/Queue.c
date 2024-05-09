#include <stdio.h>
#include "Queue.h"

void Queue_voidInit(Queue* Q)
{
    ///make the size of the array equal 0
    Q->Size=0;
    ///make the Rear equal NULL
    Q->Rear=NULL;
    ///make the front equal NULL
    Q->Front=NULL;

}

int  Queue_intIsEmpty(Queue* Q)
{
   int return_val=0;
   if((Q->Size)==0)
   {
       return_val=1;
   }
   return return_val;
}
int  Queue_intSize(Queue* Q)
{
   return (Q->Size) ;
}
void Queue_voidPrint(Queue* Q)
{
    ///counter that loop on queue elements
    int i;
    ///temp Poniter that hold front value
    Node *temp_front=Q->Front;
    ///loop on each node and print the value of it
    for(i=0;i<(Q->Size);i++)
    {
        printf("%i\n",temp_front->data);
        temp_front=temp_front->next;
    }

}
void Queue_voidEnQueue(Queue* Q,int input_data)
{
   ///create the node
   Node *node=(Node *)malloc(sizeof(Node));
   ///put the data in the node
   node->data=input_data;
   ///make the next of node points to Null, because it last node
   node->next=NULL;
   ///check if the queue is empty
   if((Q->Size)==0)
   {
       ///make front and rear points to first node
       Q->Front=node;
       Q->Rear=node;
   }
   else
   {
       ///make the last node in the queue points to created node
       ///Rear points to last node in queue
       Q->Rear->next=node;

       ///make rear points to created node
       Q->Rear=node;
   }
   ///increase size by 1
   (Q->Size)++;

}
void Queue_voidDeQueue(Queue* Q, int* return_data)
{
    if((Q->Size)==0)
    {
        printf("the Queue is empty");
    }
    else
    {
    ///return the data
    *return_data=Q->Front->data;
    ///save the address on the next node
    Node *next_node=Q->Front->next;
    ///delete the first node
    free(Q->Front);
    ///make front points to next node
    Q->Front=next_node;

    ///check if the deleted node was the only node in queue
    if((Q->Size)==0)
    {
        ///make rear points to null
        Q->Rear=NULL;
    }
    ///decrease size by 1
    (Q->Size)--;
    }

}
