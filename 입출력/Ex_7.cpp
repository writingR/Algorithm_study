#include <stdio.h>

int arr[1000];

// 퀵정렬 
void quickSort (int *arr,int start,int end)
{
	if(start >= end)
	{
		return;
	}
	int key = start;
	int i = start+1; 
	int j = end;
	int temp;
	
	while (i<=j)
	{
		// 4 5 3 1 2  
		while(arr[i] <= arr[key])
		{
			i++;
		}
		while (arr[j] >= arr[key] && j>start )
		{ 
			j--;
		}
		
		
		if (i>j)
		{
			temp = arr[j];
			arr[j] = arr[key];
			arr[key] = temp;	
		}	
		else   
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			 
		}
		
		quickSort(arr,start,j-1);
		quickSort(arr,j+1,end);
	}
	
	
	
}


int main(void)
{
	int i,j,min,index,temp,number;
	scanf("%d",&number);
	
	for (i=0;i<number;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//선택정렬 
	for (i=0;i<number;i++)
	{
		min = 9999;
		for (j=i;j<number;j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
			
			temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}

	//버블정렬 
	for (i=0;i<number;i++)
	{
		for (j=0;j<number-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	//삽입정렬 
	for (i=0;i<number-1;i++)
	{
		j = i;
		
		while(arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			j--;
		}
	}
	
	
	quickSort(arr,0,number-1);
	
	
	for (i=0;i<number;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
