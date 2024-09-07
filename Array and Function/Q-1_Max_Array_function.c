//Write a program to find out the max number from given array using function

#include<stdio.h>
main()
{
	int arr[50], n, i, max=0;
	
	printf("\n\n\t Enter the size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Input arr[%d]: ", i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\t ---------Array Elements------------------");
	for(i=0;i<n;i++)
	{
		printf("\n\n\t arr[%d]: %d", i, arr[i]);
	}
	
	max=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	printf("\n\n\t Maximum Element : %d", max);
	
}
