#include <stdio.h>

#define ARRAY_LEN     5
#define ASCENDING     0
#define DESCENDING    1

void scan_arr(int *arr,int lenght);
void bubble_sort(int *arr,int lenght,char option);
void print_arr(int *arr,int lenght);

int main()
{
    ///1_define array varible
    int arr[ARRAY_LEN];
    ///2_scan the option from user
    char option;
    printf("if you want to sort the array ascending press:0\nif you want to sort the array descending press:1\nyour option:");
    scanf("%i",&option);
    ///3_scan the array

    scan_arr(arr,ARRAY_LEN);
    ///3_sort array
    bubble_sort(arr,ARRAY_LEN,option);

    printf("\n\n");
    ///4_print array
    print_arr(arr,ARRAY_LEN);
    return 0;
}

void scan_arr(int *arr,int lenght)
{
    int i;
    for(i=0; i<lenght; i++)
    {
        printf("please enter the element[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
}

void bubble_sort(int *arr,int lenght,char option)
{
    ///ASCENDING
    if(option==ASCENDING)
    {
        int i,j,temp,flag;
        for(i=lenght-1; i>0; i--)
        {
            flag=0;
            for(j=0; j<i; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    flag=1;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            if(flag==0)
            {
                break;
            }
        }

    }
    ///DESCENDING
    else if(option==DESCENDING)
    {
        int i,j,temp,flag;
        for(i=lenght-1; i>0; i--)
        {
            flag=0;
            for(j=0; j<i; j++)
            {
                if(arr[j]<arr[j+1])
                {
                    flag=1;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            if(flag==0)
            {
                break;
            }
        }

    }
    ///Wrong OPtion
    else
    {
        printf("Wrong OPtion");
    }
}

void print_arr(int *arr,int lenght)
{
    int i;
    for(i=0; i<lenght; i++)
    {
        printf("the element [%d]: %d \n",i+1,arr[i]);
    }
}
