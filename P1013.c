#include<stdio.h>
int main()
{
    int a,b,c,d,e,max1,max2;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+abs(a-b);     //maiorAB=d/2. this formula is for finding greatest value between two numbers
    max1=d/2;          //so first find greatest amongst A&B then amongst the obtained value & C
    e=max1+c+abs(max1-c);
    max2=e/2;
    printf("%d eh o maior\n",max2);
    return 0;
}
