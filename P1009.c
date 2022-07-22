#include<stdio.h>
int main()
{
    char A;
    double B,C,commission,total; //A is the name,B is salary,C is the sales total;
    scanf("%s%lf%lf",&A,&B,&C);
    commission=(15*C)/100; //15% gain from c i.e sales;
    total=B+commission;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
