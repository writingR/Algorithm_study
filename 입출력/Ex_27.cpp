#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
// back 3047 ¹®Á¦ 
using namespace std;

int n = 3;

int main(void)
{
	
	int num;
	vector <int> v;
	
	for (int i=0;i<n;i++)
	{
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(),v.end());
	string st;
	cin >> st;
	
	for (int i=0;i<st.size();i++)
	{
		if(st.at(i)=='A')
		{
			cout << v[0] << ' ';
		}
		else if(st.at(i)=='B')
		{
			cout << v[1] << ' ';
		}
		else if(st.at(i)=='C')
		{
			cout << v[2] << ' ';
		}
	}
	 
	 
	return 0;
}
