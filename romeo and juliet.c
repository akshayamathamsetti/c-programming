#include<stdio.h>
int main()
{
    int x,y,z;
    int total_money,chocolates;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    total_money=(x*5)+(y*10);
    chocolates=total_money/z;
    printf("%d",chocolates);
    return 0;
}
