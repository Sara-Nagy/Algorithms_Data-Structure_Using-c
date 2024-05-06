#include <stdio.h>
#include "Linked_list.h"


int main()
{
    ///create the list
    List L1;
    ///initialize  the list
    Init_List(&L1);
    ///insert same nodes
    Insert_Node(&L1,0,1);
    Insert_Node(&L1,1,2);
    Insert_Node(&L1,2,3);
    Insert_Node(&L1,3,4);
    Insert_Node(&L1,4,5);
Print_List(&L1);

printf("****************\n");
    int copy1;
    Delete_Node(&L1,0,&copy1);
    Print_List(&L1);
    printf("****************\n");
    ///2 3 4 5
    int copy2;
    Delete_Node(&L1,2,&copy2);
    Print_List(&L1);
    printf("****************\n");
    ///2 3 5
    int copy3;
    Delete_Node(&L1,2,&copy3);
    /// 2 3
    Print_List(&L1);
    printf("*************************\n");
    /////
   Insert_Node(&L1,2,8);
   Print_List(&L1);
   printf("************************\n");
   int copy4;
   Pop_End(&L1,&copy4);
   Print_List(&L1);




    return 0;
}
