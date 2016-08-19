#include <stdio.h>

void k(void)
{
	int x=8;
	*(&x+2)-=34;
	
}

void main(void)
{
	int x=0;
	x++;

	printf("X=%d\n",x);
	
	if(x<=9)
	{
		k();
	}
	
}
