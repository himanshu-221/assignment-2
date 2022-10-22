// Print sum of digit of three number
#include<stdio.h>
int main()
{
    int num,n,sum=0;
    printf("Enter a three digit number:\n");
    scanf("%d",&num);
    n=num;
    sum=num%10;
    num=num/10;
    sum+=num%10;
    num=num/10;
    sum+=num;
    printf("sum of three digits no. %d is %d",n,sum);
    return 0;
}