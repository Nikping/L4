#include <stdio.h>


void sortStackArray(int *arr, int n)
{
	printf("%d \n", n);
	readArray(arr, n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);

}