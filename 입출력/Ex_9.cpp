#include <stdio.h>
// 5 5 4 3 2 1 

int N;
int data[1000001];

void quickSort(int *data, int start, int end)
{
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;
	if (start>=end)
		{
			return;
		}
	while (i <= j)
	{
		
		while (data[i] <= data[key])  // 4 3 5 1 2 
		{
			i++;
		}
		while (data[j] >= data[key]&& j > start)
		{
			j--;
		}
		
		if (i > j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else 
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
		
		quickSort (data,start,j-1);
		quickSort (data,j+1,end);
	}
	
}


int main(void)
{
	//int N;
	int i;
	scanf("%d",&N);
	
	for (i=0;i<N;i++)
	{
		scanf("%d",&data[i]);
	}
//	getchar();

	quickSort (data,0,N-1);

		for (int i=0;i<N;i++)
	{
		printf("%d ", data[i]);
	}

	

	return 0;
}
