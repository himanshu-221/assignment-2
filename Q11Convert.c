// Convert the INR into the USD. 1USD=76.23/
#include<stdio.h>
int main()
{
    int x;
    float usd;
    printf("Enter amount in INR: \n");
    scanf("%d",&x);
    usd=x/76.23;
    printf("amount in USD is:  %.2f USD ",usd);
    return 0;
}