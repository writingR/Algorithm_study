#include <stdio.h>

int number = 9;
int heap[9] = {3,4,5,6,7,8,1,2,9};

int main()
{
	
	int i,temp,c,root;
	  
	// �ִ� �������� ����� ���� �� . ('�θ���'�� '�ڽĳ��'���� ū �� )
	for (i=1;i<number;i++)
	{
		c = i;
		do
		{
			root = (c-1) / 2;
			if(heap[root] < heap[c])
			{
				heap[temp] = heap[root];
				heap[root] = heap[c];
				heap[c] = heap[temp];
			}
			c = root;
		} while (c != 0);
	}
	
	// �ִ����� ũ�⸦ ���̸鼭 �� ���� (��������)
	for (i=number-1;i>=0;i--)
	{
		temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		root = 0;
		c = 1;
		do {
			c = 2 * root + 1;
			if (heap[c] < heap[c+1] && c < i-1)
			{
				c++;
			} 
			if (heap[root] < heap[c] && c < i)
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		} while (c<i);
	}
	
	// ��� 
	for (i=0;i<number;i++)
	{
		printf("%d \n",heap[i]);
	}
	
	return 0;
}
