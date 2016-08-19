#include <stdio.h>
void k(){
 int x;
 *(&x+2) += 7;
}

void main(void){
 int x,y = 0;
 x = 0;
 printf("Selam%d\n", y);
 x++; 
 printf("X%d\n", x);
 if(x<=10)
 k();
}
