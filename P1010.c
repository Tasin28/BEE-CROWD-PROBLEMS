#include<stdio.h>
int main()
{
    int prodcode1,prodcode2,numofprod1,numofprod2;
    float priceofprod1,priceofprod2,totalofprod1,totalofprod2,sum;
    scanf("%d%d%f\n%d%d%f",&prodcode1,&numofprod1,&priceofprod1,&prodcode2,&numofprod2,&priceofprod2);
    totalofprod1=numofprod1*priceofprod1;
    totalofprod2=numofprod2*priceofprod2;
    sum=totalofprod1+totalofprod2;
    printf("VALOR A PAGAR: R$ %.2f\n",sum);
    return 0;


}
