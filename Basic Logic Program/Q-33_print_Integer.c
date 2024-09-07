//wap C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
	int n;

	printf("\n\n\t enter the n : ");
	scanf("%d",&n);
	
	printf("\n\n\t mention three powers of %d :",n);
	printf("\n\n\t %d^1 = %d",n , n);
	printf("\n\n\t %d^2 = %d",n , n * n);
	printf("\n\n\t %d^3 = %d",n , n * n * n);
}
