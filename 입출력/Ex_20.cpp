#include <stdio.h>
// 계수정렬 
int main()
{

	int count[100];
	int N,i,j,temp;
	scanf("%d",&N);
	int arr[N];
	
	
	for (i=0;i<1001;i++)
	{
		count[i] = 0;
	}
	
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
		count[arr[i]-1]++;
	}
	
	for (i=0;i<N;i++)
	{
		if(count[i] != 0){
			for (j=0;j<count[i];j++)
			{
				printf("%d\n",i+1,i+1);
			}
		}
	}
	
	
	return 0;
}
