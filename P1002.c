//π = 3.14159
#include<stdio.h>
int main()
{
    double R,p,A;
    p=3.14159;
    scanf("%lf",&R);
    A=p*R*R;//A is used as a variable to do the mathematical calculation per say to find the area of circle.
    printf("A=%.4lf\n",A);//the first A is a normal print of just the A and the second A is the value A from line 8
    return 0;
}
