#include<stdio.h>
int main()
{
	int r1,r2,c1,c2;
	printf("enter the rows for first matrix\n");
	scanf("%d", & r1);
	printf("enter the columns for first matrix\n");
	scanf("%d", & c1);
	printf("enter the rows for second martrix\n");
	scanf("%d", & r2);
	printf("enter the columns for second matrix\n");
	scanf("%d", & c2);
	if(c1!=r2)
	{
		printf("matrix cant be multiplied\n");
	}
	else
	{
		int m1[r1][c1],m2[r2][c2];
		printf("enter the first matrix elements\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				scanf("%d", & m1[i][j]);
			}
		}
		printf("enter the second matrix elements\n");
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			{
				scanf("%d", & m2[i][j]);
			}
		}
		int mul[r1][c2];
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				mul[i][j]=0;
				
				//multiply i'th row with j'th column
				for(int k=0;k<c1;k++)
				{
					mul[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}
		printf("multiplied matrix\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				printf("%d\t", mul[i][j]);
			}
			printf("\n");
		}	
	}
	return 0;
}