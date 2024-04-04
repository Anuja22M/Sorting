#include<stdio.h>
void swap(int *a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void SelectionSort(int a[],int n)
	{
	int i,j,min,pos,temp;
	for (i=0;i<n-1;i++)	
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
			   min=a[j];
			   pos=j;
	     	}
		}
		if(i!=pos)
		{
		   swap(&a[i],&a[pos]);
		}
	}
}
void BubbleSort(int a[],int n)
{
	int i,j,pass=1;
	while(i<n-1&&pass)
	{
		j=0;
		pass=0;
		while(j<n-1-i)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				pass=1;
			}
			j++;
		}
		i++;
	}
}
void InsertionSort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>-1&&a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
void printarray(int a[],int size)
{
    int i;
	printf("The array after sorting is : ");
	for(i=0;i<6;i++)
	{
		printf("%d  ",a[i]);
	}
}
int main()
{
	int a[]={15,-31,23,-19,37,0,9,29};
	int i;
	int n=sizeof(a)/sizeof(a[0]);
	InsertionSort(a,n);
    printarray(a,n);
    return 0;
}
