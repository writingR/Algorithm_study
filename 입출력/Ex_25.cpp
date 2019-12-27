#include <iostream>
#include <queue>
//  ť (Que)
using namespace std;

int main(void)
{
	queue<int> q;
	
	
	
	q.push(3);
	q.push(7);
	q.push(4);
	q.pop();
	q.push(2);
	q.push(9);
	q.pop();
	
	while(!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();	
	}
	
	return 0;
	
}
