// Swap two values without using third variable.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first and second number: \n");
    scanf("%d %d",&num1,&num2);
    printf("num1 and num2 before swaping: %d and %d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1 and num2 before swaping: %d and %d\n",num1,num2);
}