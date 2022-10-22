//A number of three digit and a single digit merge them or(apend)
#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter a number and a single digit \n");
    scanf("%d %d",&x,&n);
    x=x*10;
    x=x+n;
    printf("%d",x);
    return 0;
}