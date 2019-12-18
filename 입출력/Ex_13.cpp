#include <stdio.h>

// 계수 정렬  -> O(n)

int main(void)
{
	int N,i,j,temp;
	int arr[1001] = {0, };
	
	scanf("%d",&N);
	
	for (i=0;i<N;i++)
	{
		scanf("%d",&temp);
		arr[temp]++;
	}
	
	for (i=1;i<1001;i++)
	{
			if(arr[i] != 0)
			{
				for (j=0;j<arr[i];j++)
				{
					printf("%d\n",i);
				}
			}
	}
	
	return 0;
	
}
