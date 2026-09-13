#include<stdio.h>
#include<math.h>

int main(){
int a,b,op,addition,subtraction,multiplication,division, remainder;
printf("enter two numbers a and b: \n");
scanf("%d %d", &a,&b);
printf("enter 1 for addition or 2 for subtraction or 3 for multiplication or 4 for division: \n");
scanf("%d",&op);
if(op==1){
    addition = a + b;
    printf("sum= %d", addition);
}
if(op==2){
    subtraction = a - b;
    printf("difference= %d", subtraction);
}
if(op==3){
    multiplication = a * b;
    printf("product= %d", multiplication);
}
if(op==4){
    division = a / b;
    remainder = a % b;
    printf("quotient= %d \n", division);
    printf("remainder= %d", remainder);
}
return 0;
}
