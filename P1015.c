#include<stdio.h>
int main()

{
    double x1,y1,x2,y2,d,e;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    e=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    d=sqrt(e);
    printf("%.4lf\n",d);
    return 0;
}
