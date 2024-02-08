#include<stdio.h>
#include<stdlib.h>

int main()
{
	int no_of_elements, *arr;

	printf("Enter number of elements for array: ");
	scanf("%d", &no_of_elements);

	arr = (int*)malloc(sizeof(int)*no_of_elements);

	for(int i=0; i<no_of_elements; i++)
	{
		printf("Enter element number %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\n\nThe Elements of Array - ");
	for(int i=0; i<no_of_elements; i++)
	{
		printf("\nElement number %d = %d", i+1, arr[i]);
	}

	return 0;
}
