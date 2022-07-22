#include<stdio.h>
int main()
{

    int v,t,s;
    float totallitres;
    scanf("%d%d",&t,&v);
    s=v*t;
    totallitres=s/12.0;
    printf("%.3f\n",totallitres);
    return 0;
}
