
#ifndef QUEUE_TYPES_H
#define QUEUE_TYPES_H

///define Max size of queue
#define QUEUE_MAX_SIZE    1000

///define the Queue
typedef struct Queue
{
    ///define the size of the queue
    int Size;
    ///define the variable that hold the location we enqueue in it
    int Rear;
    ///define the variable that hold the location we dequeue from it
    int Front;
    ///define the queue itself
    int Queue_Q[QUEUE_MAX_SIZE];


}Queue;
#endif // QUEUE_TYPES_H
