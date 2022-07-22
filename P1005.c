#include<stdio.h>
int main()
{
    float A,B,C;
    double average;
    scanf("%f%f",&A,&B);
    A=A*3.5;
    B=B*7.5;
    C=3.5+7.5;
    average=(A+B)/C;
    printf("MEDIA = %.5lf\n",average);
    return 0;
}
