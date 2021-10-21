
//gcc lcm.c -o lcm
#include <stdio.h>

int main ()
{
	int x, y, lcm;
	//read two integers
	printf("\n\nEnter two positive number: ");
	scanf("%d%d", &x, &y);
	//Store the bigger number in 1cm
	if(x > y)
		lcm = x;
	else
		lcm = y;
	//run infinitely, break when LCM if found 
	while(1)
	{
		if ( (lcm %x == 0) && (lcm %y ==0))
		{
			printf("\n\nThe LCM of %d and %d is %d.\n\n", x, y, lcm);
			break;
		}
		lcm = lcm + 1;
	}
	return 0;


}