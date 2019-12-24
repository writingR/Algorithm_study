#include <iostream>
#include <algorithm>

using namespace std;

string word[20001];
int N;

bool compare(string a, string b)
{
	if (a.length() < b.length())
	{
		return 1;
	}
	else if (a.length() > b.length()) 
	{
		return 0;
	}
	else
	{
		return a < b;
	}
}

int main()
{
	cin >> N;
	
	for (int i=0;i<N;i++)
	{
		cin >> word[i];
	}
	
	sort(word,word+N,compare);
	
	for (int i=0;i<N;i++)
	{
		if(i>0 && word[i] == word[i-1]){
			continue;
		}
		else
		{
			cout << word[i] << '\n';
		}
		
	}
	
	return 0;
} 
