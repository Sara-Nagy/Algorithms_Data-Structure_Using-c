#include <stdio.h>
#define ARRAY_LENGHT    5
void Scan_Array(int *arr,int len);
int linear_search(int *arr,int lenght,int key);
void Print_Array(int *arr,int len);

int main()
{
    int arr[ARRAY_LENGHT];
    int key;
    printf("please enter the elements of the array:");
    Scan_Array(arr,ARRAY_LENGHT);
    printf("please enter the key to be searched:");
    scanf("%i",&key);
    int loction=linear_search(arr,ARRAY_LENGHT,key);

    if(loction==-1)
    {
        printf("this element is not found");
    }
    else
    {
        printf("this element found in location:%d",loction);
    }
    return 0;
}


int linear_search(int *arr,int lenght,int key)
{
    int i,index=-1;
    for(i=0; i<lenght; i++)
    {
        if(key==arr[i])
        {
            index=i;
            break;
        }
    }
    return index;
}
void Scan_Array(int *arr,int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        scanf("%i",(arr+i));
    }
}

void Print_Array(int *arr,int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        printf("%i ",arr[i]);
    }
}
