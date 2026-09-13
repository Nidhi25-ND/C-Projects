#include<stdio.h>
#include<string.h>

int main(){
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    
    if(number < 0){
        printf("the number is negative");
    }
if(number > 0){
    printf("the number is positive");
}

return 0;

}
