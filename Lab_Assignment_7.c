#include <stdio.h>

void printArray(int arr[], int count,  int size)
{
    for (int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");
    printf("Number of swaps: %d\n", count);
    printf("\n");
}


void bubbleSort(int arr[], int n)
{
    int i, j,temp,count = 0;
    for (i = 0; i < n-1; i++)
    {
        printf("Iteration %d: \n", i+1);
        count = 0;
        for (j = 0; j < n-i-1; j++)
        {
            //swap and append counter value at j
            if (arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
        printArray(arr, count, n);
    }
}


int main(void) {

    int arr[9] = {97,16,45,63,13,22,7,58,72};
    printf("Inital Array: ");
    for(int i = 0; i<9; i++)
    {
         printf("%d ", arr[i]); 
    }
    printf("\n");
    printf("\n");
    bubbleSort(arr, 9);
    return 0;
}