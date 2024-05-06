#include <stdio.h>
#include <stdlib.h>
#include "Linked_List_Types.h"

void Init_List(List *L)
{
    ///1-make size =0
    L->Size=0;
    ///2-make head points to null
    L->head=NULL;
}

void Print_List(List *L)
{
    ///counter to loop on list nodes
    int i=0;
    ///temp pointer to hold the value of the pointer that points on nodes
    Node * Temp=L->head;
    ///loop on each node in the list
    for(i=0; i<(L->Size); i++)
    {
        printf("%d\n",Temp->data);
        Temp=Temp->next;
    }


}

int List_Size(List *L)
{
    ///return the number of nodes in the list
    return L->Size;

}


int Is_List_Empty(List *L)
{
    ///variable that hold the result
    int return_value=0;
    if ((L->Size)==0)
    {
        return_value=1;
    }
    return return_value;

}

void Clear_List(List *L)
{
    ///counter that loop on list node
    int i=0;
    ///temp pointer that points to nodes
    Node *temp;
    ///loop on each node and delete it
    for(i=0; i<(L->Size); i++)
    {
        temp=L->head;
        L->head=temp->next;
        free(temp);
    }
    ///make the size of the list equals zero
    L->Size=0;

}


void Return_Node_Value(List* L, int position,int *copy_data)
{
    ///counter that loop on nodes
    int i=0;
    ///temp pointer points to nodes
    Node * temp=L->head;
    ///check if the list is empty
    if((L->Size)==0)
    {
        printf("The List is empty");
    }
    else
    {
        ///check if the position is exist
        if((position>=0)&&(position<(L->Size)))
        {
            ///loop on node until we find the before wanted node
            for(i=0; i<position; i++)
            {
                temp=temp->next;
            }
            ///return the value of data
            *copy_data=temp->data;

        }
        else
        {
            printf("wrong position");
        }
    }

}

void Push_Head(List *L,int copy_data)
{
    ///create the node the wanted to be pushed at the head
    Node * node=(Node*) malloc(sizeof(Node));
    ///put the data in the node
    node->data=copy_data;
    ///make the next of the node hold the head value to point to first node
    node->next=L->head;
    ///make the head points to the created node
    L->head=node;
    ///increase node size by 1
    L->Size=(L->Size)+1;

}

void Push_End(List *L,int copy_data)
{
    ///counter that loop on the nodes
    int i=0;
    ///temp pointer that points to nodes
    Node *temp=L->head;
    ///create node that wanted to be pushed
    Node *node=(Node*)malloc(sizeof(Node));

    ///check if the node is empty
    if((L->Size)==0)
    {
        Push_Head(L,copy_data);
    }
    else
    {
        ///loop on nodes until last node
        for(i=0; i<(L->Size)-1; i++)
        {
            temp=temp->next;
        }
        ///make the next of last node points to created node
        temp->next=node;
        ///put the data in the node and next =null
        node->data=copy_data;
        node->next=NULL;

        ///increase the size by 1
        L->Size=(L->Size)+1;
    }

}

void Pop_Head(List *L,int *copy_data)
{
    ///crrate a pointer points to second node in the list
    Node *second_node=L->head->next;
    ///check if the list is empty
    if((L->Size)==0)
    {
        printf("the list is empty");
    }
    else
    {
        ///return the value of first node
        *copy_data=L->head->data;
        ///delete first node
        free(L->head);
        ///make head points to second node
        L->head=second_node;
        ///decrease list size by 1
        L->Size=(L->Size)-1;
    }

}

void Pop_End(List *L,int *copy_data)
{
    ///counter that loop on node
    int i=0;
    ///temp pointer that points to node
    Node * temp=L->head;
    ///check if the list is empty
    if((L->Size)==0)
    {
        printf("the list is empyt");
    }
    ///check if the list has one node
    else if ((L->Size)==1)
    {
        Pop_Head(L,copy_data);
    }
    else
    {
        ///loop on nodes
        for(i=0; i<(L->Size -2); i++)
        {
            temp=temp->next;
        }
        ///return the data of last node
        *copy_data=temp->next->data;
        ///delete last node
        free(temp->next);
        ///make temp pints to null
        temp->next=NULL;
        ///decrease size by 1
        L->Size=(L->Size)-1;

    }

}
void Insert_Node(List* L, int position,int copy_data)
{
    ///counter that loop on the nodes
    int i=0;
    ///pointer that points on the nodes
    Node * temp=L->head;
    ///create the node to be inserted
    Node * node=(Node*) malloc(sizeof(Node));

    ///check on position
    if ((position >=0)&&(position <=(L->Size)))
    {

        ///check if the node is empty or position =0
        if(((L->Size)==0)||(position==0))
        {
            Push_Head(L,copy_data);
        }
        else
        {
            ///loop on the nodes until the node before the wanted position
            for(i=0; i<position-1; i++)
            {
                temp=temp->next;
            }
            ///put the data in the node
            node->data=copy_data;
            ///make the next of the created node points to node in position
            node->next=temp->next;
            ///make the next of node position-1 points on node
            temp->next=node;
            ///increase the size by 1
            L->Size=(L->Size)+1;
        }
    }
    else
    {
        printf("wrong position");
    }

}


void Delete_Node(List* L, int position,int *copy_data)
{
    ///counter the loop on the nodes
    int i=0;
    ///temp pointer that points on nodes
    Node *temp=L->head;
    ///pointer to hold temp value
    Node * temp_next;

    ///check on position
    if((position>=0)&&(position<(L->Size)))
    {
        ///check if the list is empty
        if((L->Size)==0)
        {
           printf("the list is empty");
        }
        else if (position ==0)
        {
            Pop_Head(L,copy_data);
        }
        else
        {
            for(i=0;i<position-1;i++)
            {
                temp=temp->next;
            }
            ///return node value
            *copy_data=temp->next->data;
            ///save the next of this node
            temp_next=temp->next->next;
            ///delete the node
            free(temp->next);
            ///make the next pints to this node points on the node after it
            temp->next=temp_next;
            ///decrease the size by 1
            L->Size=(L->Size)-1;
        }
    }
    else
    {
        printf("wrong position");
    }



}

