#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter number:\n");
    scanf("%d",&num);
    rem=num%10;         // % operator return remainder that is our unit digit
    printf("Unit digit of the %d is: %d",num,rem);
    return 0;
}