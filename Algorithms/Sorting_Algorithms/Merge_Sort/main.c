#include <stdio.h>
#define ARR_LEN   5
void scan_arr(int *arr,int lenght);
void mergr_sort(int *arr,int start,int end);
void mergr_halves(int *arr,int start,int end);
void print_arr(int *arr,int lenght);

int main()
{
   int arr[ARR_LEN];
   scan_arr(arr,ARR_LEN);
   mergr_sort(arr,0,ARR_LEN-1);
   printf("\n\n");
   print_arr(arr,ARR_LEN);
   return 0;
}

void scan_arr(int *arr,int lenght)
{
    int i;
    for(i=0;i<lenght;i++)
    {
        printf("please enter the element[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
}

void mergr_halves(int *arr,int start,int end)
{
    int temp_arr[ARR_LEN];
    int mid=(start+end)/2;
    int startleft=start;
    int endleft=mid;
    int startright=mid+1;
    int endright=end;
    int temp_index=start;
    while(startleft<=endleft && startright<=endright)
    {
        if(arr[startleft]<=arr[startright])
        {
            temp_arr[temp_index++]=arr[startleft++];
        }
        else
        {
            temp_arr[temp_index++]=arr[startright++];
        }
    }
    while(startleft<=endleft)
    {
       temp_arr[temp_index++]=arr[startleft++];
    }
    while(startright<=endright)
    {
       temp_arr[temp_index++]=arr[startright++];
    }
    temp_index=start;
    while(start<=end)
    {
       arr[start++]=temp_arr[temp_index++];
    }

}
void mergr_sort(int *arr,int start,int end)
{
    int mid=(start+end)/2;
    if(start<end)

   {
    mergr_sort(arr,start,mid);
    mergr_sort(arr,mid+1,end);
    mergr_halves(arr,start,end);
   }

}

void print_arr(int *arr,int lenght)
{
   int i;
    for(i=0;i<lenght;i++)
    {
        printf("the element [%d]: %d \n",i+1,arr[i]);
    }
}
