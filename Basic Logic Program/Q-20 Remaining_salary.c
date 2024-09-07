#include<stdio.h>
main()
{
	float s, ip, li, re;
	
	printf("\n\n\t Enter your Monthly salary : ");
	scanf("%f", &s);
	
	ip=s*0.10;
	li=s*0.10;
	re=s-ip-li;
	
	printf("\n\n\t Your monthly salary: %.2f", s);
    printf("\n\n\t Insurance premium (10%): %.2f", ip);
    printf("\n\n\t Loan installment (10%): %.2f", li);
    printf("\n\n\t Remaining salary: %.2f", re);
	
}
