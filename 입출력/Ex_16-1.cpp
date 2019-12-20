#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair <int, int> a, pair <int, int> b)
{
	if(a.second == b.second)
	{
		return a.first < b.first;
	}
	else
	{
		return a.second < b.second;
	}
	
}

int main ()
{

	int N;
	std::cin >> N;
	vector <pair <int, int> > v(N);
	
	for(int i=0;i<N;i++)
	{
		std::cin >> v[i].first >> v[i].second;
	}
	
	
	sort(v.begin(),v.end(),compare);
	
	for (int i=0;i<N;i++)
	{
		std::cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}

/*
5
0 4
1 2
1 -1
2 2
3 3
*/
