#include<stdio.h>
void main()
{
    float kg,gms;
    printf("Enter kilogram:");
    scanf("%f", &kg);
    gms=kg*1000;
    printf("%f*1000=%f",kg,gms);
}
