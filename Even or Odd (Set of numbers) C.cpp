#include<stdio.h>
int main()
{
	int n,i,a[20];
	printf("enter the size of array:");
	scanf("%d",& n);
	printf("enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", & a[i]);
	}
	printf("even numbers in array\n");
	for (i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("%d \t",a[i]);
	}
	printf("\nodd numbers in array\n");
	for (i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		printf("%d \t",a[i]);
	}
	
	return 0;
}