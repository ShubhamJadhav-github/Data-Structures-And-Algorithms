#include<stdio.h>
int main()
{
	int arr[5];
	printf("Enter first element of array: ");
	scanf("%d",&arr[0]);
	printf("Enter second element of array: ");
	scanf("%d",&arr[1]);
	printf("Enter third element of array: ");
	scanf("%d",&arr[2]);
	printf("Enter fourth element of array: ");
	scanf("%d",&arr[3]);
	printf("Enter fifth element of array: ");
	scanf("%d",&arr[4]);

	printf("\n\nElements of array are-\n");
	for(int i=0; i<=4; i++)
	{
		printf("\nElement Number %d = %d",i+1,arr[i]);
	}
	return 0;
}
