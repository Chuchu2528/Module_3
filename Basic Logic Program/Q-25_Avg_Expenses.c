// Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	int n1, n2, n3, n4, n5, avg, exp;
	
	printf("n\n\n\t Enter n1:");
	scanf("%d",&n1);
	printf("n\n\n\t Enter n2:");
	scanf("%d",&n2);
	printf("n\n\n\t Enter n3:");
	scanf("%d",&n3);
	printf("n\n\n\t Enter n4:");
	scanf("%d",&n4);
	printf("n\n\n\t Enter n5:");
	scanf("%d",&n5);
	
	exp = n1+n2+n3+n4+n5;
	avg = exp/5;
	
	printf("\n\n\t total exp : %d",exp);
	printf("\n\n\t total exp average : %d",avg);
		
}
