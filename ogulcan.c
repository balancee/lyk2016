#include <stdio.h>
void k(void)
{
int x=2;
*(&x+2)-=34;
}
void main(void)
{
int x;
x=0;
x++;
printf("x=%d\n",x);
if(x<10)
k();
}
