#include <stdio.h>
#define ARRAY_LENGHT    5
void Scan_Array(int *arr,int len);
int  binary_search(int *arr,int lenght,int key);
void Print_Array(int *arr,int len);

int main()
{
    int arr[ARRAY_LENGHT];
    int key;
    printf("please enter the elements of the array:");
    Scan_Array(arr,ARRAY_LENGHT);
    printf("please enter the key to be searched:");
    scanf("%i",&key);
    int loction=binary_search(arr,ARRAY_LENGHT,key);

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


int binary_search(int *arr,int lenght,int key)
{
    int left = 0, right = lenght - 1;
    int mid;
    int index = -1;
    while (left <= right)
    {
        mid =(right+left) / 2;
        if (key == arr[mid])
        {
            index = mid;
            break;
        }
        else if (key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
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
