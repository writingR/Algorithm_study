#include <iostream>
#include <vector>
#include <algorithm>

// pair�� ����Ͽ� �� �� 
using namespace std;

int main()
{
	
	int i;
	
	vector <pair<int,string> > v;
	v.push_back(pair<int,string>(90,"�����"));
	v.push_back(pair<int,string>(91,"�̽¿�"));
	v.push_back(pair<int,string>(88,"������"));
	v.push_back(pair<int,string>(85,"Ȳ����"));
	v.push_back(pair<int,string>(80,"������"));
	
	for (i=0;i<v.size();i++)
	{
		cout << v[i].first << " \n";	
	} 
	
	
	return 0;
}
