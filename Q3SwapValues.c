#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter first and second value:\n");
    scanf("%d %d",&num1,&num2);
    printf("num1 and num2 before swaping: %d and %d\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1 and num2 after swaping: %d and %d\n",num1,num2);
    return 0;
}