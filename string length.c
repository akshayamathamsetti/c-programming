#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="cse",b[10]="ADITYA";
    printf("a string length is:%d\n",strlen(a));
    printf("a string reverse is:%s\n",strrev(a));
    printf("a string in upper case is:%s\n",strupr(a));
    printf("a string in lower case is:%s\n",strlwr(a));
    printf("string copy is:%s\n",strcpy(a,b));
    printf("string concat is:%s\n",strcat(a,b));
    printf("Sting compare is:%d",strcmp(a,b));
	return 0;
}
