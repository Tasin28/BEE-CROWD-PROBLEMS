#include<stdio.h>
int main()
{   // A has weight 2, grade B has weight 3 and the grade C has weight 5
    double A,B,C,E;
    int D;
    scanf("%lf%lf%lf",&A,&B,&C);
    A=A*2;
    B=B*3;
    C=C*5;
    D=2+3+5;
    E=(A+B+C)/D;
    printf("MEDIA = %.1f\n",E);
    return 0;


}
