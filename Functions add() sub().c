#include<stdio.h>

int main(){
    int num1, num2, sum, subtract, a;
    printf("enter 1 for addition or enter 2 for subtraction\t");
    scanf("%d",&a);
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(a==1){
            sum = add(num1,num2);
printf("sum=%d", sum);
    }
    if(a==2){
subtract = sub(num1,num2);
printf("subtract=%d", subtract);
    }
    else
        printf("the entered number is not in specified range");

    return 0;
}
int add(int a, int b){
int result;
result = a + b;
return result;
}
int sub(int c, int d){
int result;
result = c - d;
return result;
}

