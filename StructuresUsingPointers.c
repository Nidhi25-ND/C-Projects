#include<stdio.h>
#include<string.h>

struct student{
int id;
char name[18];
float percentage;
};
int main(){
struct student record = {1, "john", 90.9};
struct student *ptr;
ptr = &record;

 printf("Id is: %d\n", ptr->id);
 printf("Name is: %s\n", ptr->name);
 printf("Percentage is: %f", ptr->percentage);
return 0;
}
