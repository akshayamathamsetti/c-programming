#include<stdio.h>
int main()
{
    int speed_kmph;
    scanf("%d",&speed_kmph);
    float speed_mps=speed_kmph*0.27778;
    printf("%.2f",speed_mps);
    return 0;
}
