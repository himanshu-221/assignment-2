// Make last digit of a number is zero
#include<stdio.h>
int main()
{
    int num,n,rem;
    printf("Enter number:\n");
    scanf("%d",&num);              
    num=num/10;           // remove last digit of number
    num=num*10;        // multiplye with 10 it add last digit 0
    printf("%d",num);   
    return 0;
}