#ifndef QUEUE_H
#define QUEUE_H

#include "Queue_Types.h"
void Queue_voidInit(Queue* Q);
int  Queue_intIsEmpty(Queue* Q);
int  Queue_intSize(Queue* Q);
void Queue_voidPrint(Queue* Q);
void Queue_voidEnQueue(Queue* Q,int input_data);
void Queue_voidDeQueue(Queue* Q, int* return_data);
#endif // QUEUE_H

