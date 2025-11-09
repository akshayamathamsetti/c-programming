#include<stdio.h>
int main()
{
	printf("enter 2 values:");
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("bitwise and=%d\n",c);
	c=a|b;
	printf("bitwise or=%d\n",c);
	c=a^b;
	printf("bitwise ex-or=%d\n",c);
	c=a<<b;
	printf("bitwise left shift=%d\n",c);
	c=a>>b;
	printf("bitwise right shift=%d",c);
return 0;
}
