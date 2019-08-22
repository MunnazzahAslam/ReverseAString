#include<stdio.h>
#include<string.h>
main()
{
	int res;
	char a[100];
	char b[100];
	printf("Enter an array to reverse:");
	gets(a);
	printf("Enter array b");
	gets(b);
	res=strcmp(a,b);
	printf("The copied array is:%d",res);
	
}
