// Print a given number without its last digit
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    num=num/10;
    printf("without last digit %d",num);
}