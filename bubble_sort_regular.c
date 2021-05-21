#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void swap();

int main (int argc, char *argv[]) {
	int SIZE =1<<8;
	int A[SIZE];
	for(int i=0;i<SIZE;i++)
	{
	    A[i]=rand()%SIZE;
	}
	int N = SIZE;
	int i=0, j=0; 
	int first;
	time_t start,end;
	double tc;
	start=clock();
	for( i = 0; i < N-1; i++ )
	{
		first = i % 2; 
		for( j = first; j < N-1; j += 1 )
		{
			if( A[ j ] > A[ j+1 ] )
			{
				swap( &A[ j ], &A[ j+1 ] );
			}
		}
	}
end=clock();
	for(i=0;i<N;i++)
	{
		printf(" %d",A[i]);
	}
tc=(difftime(end,start)/CLOCKS_PER_SEC);
printf("time efficiency is %lf",tc);
//printf("\n-------------------------\n Tempo serial = %f",(end-start));
}

void swap(int *num1, int *num2)
{

	int temp = *num1;
	*num1 =  *num2;
	*num2 = temp;
}