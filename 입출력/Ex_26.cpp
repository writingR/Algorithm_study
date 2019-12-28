#include <iostream>
#include <queue>
#include <vector> 
// �ʺ� �켱 Ž��(BFS) -> ��� �������� �����Ҷ� ������ ���ַ� Ž���� ������. 
using namespace std;

int number = 7;
int visit[7];
vector <int> node[8];

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visit[start] = true;
	
	while(!q.empty())
	{
		int x = q.front();
		q.pop(); // 1 2 3 4 5
		printf("%d ",x);
		for (int i=0;i<node[x].size();i++)
		{
			int y = node[x][i];
			if(!visit[y])
			{
				q.push(y);
				visit[y] = true;
			}
		}
	}
	
}

int main(void)
{
	
	node[1].push_back(2);
	node[2].push_back(1);
	
	node[1].push_back(3);
	node[3].push_back(1);
	
	node[2].push_back(4);
	node[4].push_back(2);
	
	node[2].push_back(5);
	node[5].push_back(2);
	
	node[3].push_back(6);
	node[6].push_back(3);
	
	node[3].push_back(7);
	node[7].push_back(3);
	
	
	bfs(1);
	
	// 1
	// 2,3
	return 0;
}
