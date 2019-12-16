#include <stdio.h>

int arr[3];

int main(void)
{
	int i,j,min,temp;
	
	for (i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
		
	getchar();
	
	//선택정렬
	for (i=0;i<3;i++)
	{
		int index;
		min = 1000;
		for (j=i;j<3;j++)
		{
			if(min>arr[j])
			{
				min = arr[j];
				index = j;
			}
		}	
		
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	} 

	
	for (i=0;i<3;i++)
	{
		printf("%d ",arr[i]);
	}
}
