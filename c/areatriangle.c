#include<stdio.h>
int main()
{
    float area,base,height;
    printf("Enter base\n");
    scanf("%f",&base);
    printf("Enter height\n");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("Area of triangle=%f",area);
}