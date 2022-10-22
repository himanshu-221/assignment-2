/* Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int x,r,temp;
    printf("Enter a number only three digit \n");
    scanf("%d",&x);
    r=x%10;
    temp=x/10;
    x=(r*100)+temp;
    printf("%d",x);
    return 0;
}