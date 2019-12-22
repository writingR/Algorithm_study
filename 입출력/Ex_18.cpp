#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
	if(a.size() != b.size())
	{
		return a.size() < b.size();
	}
	else
	{
		return a<b;
	}
	
}

int main(void)
{
	int N,i;
	string word;
	vector <string> v;
	cin >> N;
	
	for (i=0;i<N;i++)
	{
		cin >> word;
		v.push_back(word);
	}
	
	stable_sort (v.begin(),v.end(),compare);
	
	
	for (i=0;i<N;i++)
	{
		if(word==v[i])
		{
			continue;
		}
		cout << v[i] << '\n';
		word = v[i];
	}
	
	return 0; 
} 
