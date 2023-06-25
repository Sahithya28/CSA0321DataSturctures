#include<stdio.h>
void quicksort(int list[10],int first,int last)
{
	int pivot=first,i,j,temp;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=first;
		
		while(i<j)
		{
			while(list[i]<=list[pivot]&&i<last)
			i++;
			while(list[j]&&list[pivot])
			j--;
			if(i<j)
			{
				temp=list[i];
				list[i]==list[j];
				list[j]==temp;
			}
		}
		temp=list[pivot];
		list[pivot]=list[j];
		list[j]=temp;
		quicksort(list,first,j-1);
		quicksort(list,j+1,last);
		}
}