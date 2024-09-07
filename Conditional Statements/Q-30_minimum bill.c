/*If bill exceeds Rs. 800 then a surcharge of 18% will be charged 
and the minimum bill should be of Rs. 256/-*/

#include <stdio.h>
main() 
{
    float billAmount, finalBill;

    printf("\n\n\t Enter the bill amount: ? ");
    scanf("%f", &billAmount);

    if (billAmount > 800) 
	{
        finalBill = billAmount + (billAmount * 0.18);
    } 
	else 
	{
        finalBill = billAmount;
    }

    if (finalBill < 256) 
	{
        finalBill = 256;
    }

    printf("\n\n\t The final bill is: ? %.2f", finalBill);

}
