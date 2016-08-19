#include <stdio.h>
void k(void)
{
int y=2;
static int x =0;
x++;
if(x==1)
{
*(&y+2)-=31;
x++;
}
else *(&y+2)+=26;
}
void main(void)
{
int x,y=0;
x=0;
printf("Selam=%d\n",y++);
k();
x=1;
printf("X=%d\n",x);
}

