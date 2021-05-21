#include <stdio.h>
#include<time.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
       // Last i elements are already in place  
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
	time_t start,end;
	double tc;
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
	start=clock();
    bubbleSort(arr, n);
	end=clock();
	tc=(difftime(end,start)/CLOCKS_PER_SEC);
	printf("time efficiency is %lf",tc);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}