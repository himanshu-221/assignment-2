// print size of int, flote, char, double;
#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=sizeof(int);
    b=sizeof(char);
    c=sizeof(float);
    d=sizeof(double);
    printf("int[%d byte], char[%d byte], float[%d byte], Double[%d byte]",a,b,c,d);
    return 0;
}