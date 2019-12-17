

// 병합정렬 

// 7 6 5 8 3 5 9 1 을 오름차순으로 병합정렬 

#include <stdio.h>

int number = 8;
int sorted[8]; 

void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;
	
	while (i<=middle && middle <= n)
	{
		if (a[i] <= a[j])
		{
			sorted[k] = a[i];
			i++;	
		} 
		else
		{
			sorted[k] = a[j];
			j++;	
		} 
		
		k++;
	}
	
	if (i>middle)
	{
		for (int t=j;t<=n;t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else 
	{
		for (int t=i;t<=n;t++)
		{
			sorted[k] = a[t];
			k++; 
		}
	}
	
	for (int t=m;t<=n;t++)
	{
		a[t] = sorted[t];
	}
}

void mergeSort (int a[], int m, int n)
{
	if(m < n)
	{
		int middle = (m+n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle+1, n);
		merge(a, m, middle, n);
	}
}

int main(void)
{
	int arr[number];
	//{7,6,5,8,3,5,9,1}
	
	
	for (int i=0;i<number;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	mergeSort(arr,0,number-1);
	
	for (int i=0;i<number;i++)
	{
		printf("%d ",arr[i]);	
	}
	
	return 0;
}
