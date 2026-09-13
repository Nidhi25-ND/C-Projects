#include<stdio.h>

int main(){
int a, b, c;
printf("enter three random numbers: \n");
scanf("%d %d %d", &a,&b,&c);

if(a>b && a>c)
    printf("the larger number is %d",a);
if(b>a && b>c)
    printf("the larger number is %d", b);
if(c>a && c>b)
    printf("the larger number is %d", c);

return 0;
}
