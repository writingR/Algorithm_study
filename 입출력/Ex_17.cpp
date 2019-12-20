#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare (pair<string,pair<int,int> > a, 
			  pair<string,pair<int,int> > b )
{
	if(a.second.first == b.second.first)
	{
		return a.second.second < b.second.second;
	}
	else
	{
		return 	a.second.first < b.second.first;
	}
}
int main()
{
	vector< pair<string,pair<int,int> > > v;
	v.push_back(pair<string,pair<int,int> >("박지성",pair<int,int>(90,60)));
	v.push_back(pair<string,pair<int,int> >("이승우",pair<int,int>(85,88)));
	v.push_back(pair<string,pair<int,int> >("조현우",pair<int,int>(90,75)));
	v.push_back(pair<string,pair<int,int> >("이영표",pair<int,int>(92,66)));
	v.push_back(pair<string,pair<int,int> >("손흥민",pair<int,int>(88,87)));
	
	
	
	sort(v.begin(),v.end(),compare);
	
	for (int i=0;i<v.size();i++)
	{
		cout<< v[i].second.first << " " << v[i].second.second << " \n" ;
		
	}
	
	
	return 0;
} 
