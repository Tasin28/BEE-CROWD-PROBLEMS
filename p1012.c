#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,Q,R,S,T,U;
    scanf("%lf%lf%lf",&A,&B,&C);
    Q=(A*C)/2;
    R=pi*C*C;
    S=(A/2+B/2)*C;
    T=B*B;
    U=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",Q,R,S,T,U);
    return 0;
}
