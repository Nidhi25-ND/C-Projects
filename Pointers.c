#include<stdio.h>

int main(){
int *pc,c;
c=22;
printf("address of c: %d\n",&c);
printf("value of c: %d\n\n", c);

pc=&c;
printf("address of pc: %d\n",pc);
printf("content of pc: %d\n\n", *pc);

c=11;
printf("address of pc: %d\n",pc);
printf("content of pc: %d\n\n",*pc);

*pc=2;
printf("address of c: %d\n",&c);
printf("value of c: %d\n\n",c);

return 0;
}
