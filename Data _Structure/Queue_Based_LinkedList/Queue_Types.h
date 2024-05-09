#ifndef QUEUE_TYPES_H
#define QUEUE_TYPES_H

///define the node of the queue
typedef struct queuenode
{
    ///the data of each node
    int                data;
    ///the pointer that points to next node
    struct queuenode*  next;
}Node;

///define the queue
typedef struct Queue
{
    ///define the number of nodes in queue
    int Size;
    ///define the pointer that point to location we dequeue from it
    Node* Front;
     ///define the pointer that point to location we enqueue in it
    Node* Rear;
}Queue;


#endif // QUEUE_TYPES_H
