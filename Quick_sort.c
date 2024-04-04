#include<stdio.h>
void swap(int *p,int *q)
{
    int t=*p;
	*p=*q;
	*q=t;	
}
int array_partition(int a[],int lb,int ub)
{
	int i,j,pivot,mid;
	mid=(lb+ub)/2;
	pivot=a[mid];
	swap(&a[lb],&a[mid]);
	i=lb;
	j=ub;
	while(i<j)
	{
	    while(a[i]<=pivot)	
	    {
	      i++;
	    }
	    while(a[j]>pivot)
	    {
	      j--;
	    }
	    if(i<j)
	    {
	    	swap(&a[i],&a[j]);
		}
	}
	swap(&a[lb],&a[j]);
	return j;
}
void quick_sort(int a[],int lb,int ub)
{
	int p;
	if(lb<ub)
	{
		p=array_partition(a,lb,ub);
		quick_sort(a,lb,(p-1));
		quick_sort(a,(p+1),ub);
	}
}
void display(int arr[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}
}

int main()
{
	int a[]={72,54,49,45,48,23,14};
	printf("Before sorting : \n");
	display(a,7);
	printf("\n After sorting :\n");
	quick_sort(a,0,6);
	display(a,7);
	return 0;
}
