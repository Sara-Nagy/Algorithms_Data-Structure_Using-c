#include <stdio.h>
#include "Queue.h"

void Queue_voidInit(Queue* Q)
{
    ///make the size of the array equal 0
    Q->Size=0;
    ///make the Rear equal 0
    Q->Rear=0;
    ///make the front equal 0
    Q->Front=0;

}
int  Queue_intIsFull(Queue* Q)
{
  int return_val=0;
   if((Q->Size)==QUEUE_MAX_SIZE)
   {
       return_val=1;
   }
   return return_val;
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
    ///temp variable that hold front value
    int temp_front=Q->Front;
    for(i=0;i<(Q->Size);i++)
    {
        printf("%i\n",Q->Queue_Q[temp_front]);
        temp_front=(temp_front+1)%QUEUE_MAX_SIZE;
    }

}
void Queue_voidEnQueue(Queue* Q,int input_data)
{
    ///check if the queue is full
    if((Q->Size)==QUEUE_MAX_SIZE)
    {
      printf("the queue is full");
    }
    else
    {
   ///put the data in queue elenemt
    Q->Queue_Q[Q->Rear]=input_data;
    ///increase the rear value
    Q->Rear=((Q->Rear)+1)%QUEUE_MAX_SIZE;
    ///increase queue size by 1
    (Q->Size)++;
    }

}
void Queue_voidDeQueue(Queue* Q, int* return_data)
{
    ///check if the queue is empty
    if((Q->Size)==0)
    {
      printf("the queue is empty");
    }
    else
    {
    ///return the data from element
    *return_data=Q->Queue_Q[Q->Front];
    ///increase the front value
    Q->Front=((Q->Front)+1)%QUEUE_MAX_SIZE;
    ///decrease queue size by 1
    (Q->Size)--;
    }
}
