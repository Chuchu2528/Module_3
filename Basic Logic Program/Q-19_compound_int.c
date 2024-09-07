//wap Calculate compound interest

#include<stdio.h>
#include<math.h>
main()
{
	float  p, r, t, interest;
	
	printf("\n\n\t enter p :");
	scanf("%f",&p);
	
	printf("\n\n\t enter r (in %) :");
	scanf("%f",&r);
	
	printf("\n\n\t enter t (in years) :");
	scanf("%f",&t);
	
	interest = p * pow ((1 + r/100), (t));
	
	printf("\n\n\t compound interest = %.2f\n", interest);
	
	}
