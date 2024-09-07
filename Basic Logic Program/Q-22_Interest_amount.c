/*Calculate compound interest (Compound Interest formula:
Amount= P(1 + R/100)t
Compound Interest = Amount – P
*/

#include<stdio.h>
#include<math.h>
main()
{
	float  p, r, t, interest, amount;
	
	printf("\n\n\t enter p :");
	scanf("%f",&p);
	
	printf("\n\n\t enter r (in %) :");
	scanf("%f",&r);
	
	printf("\n\n\t enter t (in years) :");
	scanf("%f",&t);
	
	amount = p * pow ((1 + r/100), (t));
	interest = amount - p;
	
	printf("\n\n\t compound interest = %.2f\n", interest);
	printf("\n\n\t Amount = %.2f",amount);
	
	}
