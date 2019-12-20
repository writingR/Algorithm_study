#include <iostream>
#include <vector>
#include <algorithm>

// pair를 사용하여 정 렬 (오름차순정렬) 
using namespace std;

int main()
{
	
	int i;
	
	vector <pair<int,string> > v;
	v.push_back(pair<int,string>(90,"손흥민"));
	v.push_back(pair<int,string>(91,"이승우"));
	v.push_back(pair<int,string>(88,"조현우"));
	v.push_back(pair<int,string>(85,"황희찬"));
	v.push_back(pair<int,string>(80,"박지성"));
	
	sort(v.begin(),v.end());
	
	for (i=0;i<v.size();i++)
	{
		cout << v[i].first << " \n";	
	} 
	
	 
	return 0;
}
