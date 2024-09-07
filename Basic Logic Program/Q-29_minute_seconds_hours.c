// wap Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int minut, seconds, hours;
	
	printf("\n\n\t enter the minutes : ");
	scanf("%d",&minut);
	
	seconds = minut * 60;
	hours = minut / 60;
	
	printf("\n\n\t %d minut", minut);
	printf("\n\n\t %d seconds", seconds);
	printf("\n\n\t %d hours", hours);
	
}
