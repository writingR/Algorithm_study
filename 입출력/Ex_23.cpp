#include <stdio.h>
// back 10989 ���� 
//using namespace std;

int count[10001];
int N;

int main(void)
{
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
        int num;
		scanf("%d",&num);
		count[num]++;
	}
	
	for (int i=0;i<10001;i++)
	{
		while(count[i] != 0)
		{
			printf("%d\n",i);
			count[i]--;
		}
	}
	 
	return 0;
}
