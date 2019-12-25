#include <iostream>
#include <algorithm>
// back 1431 ¹®Á¦ 
using namespace std;

string a[50];
int N; 

int getSum(string a)
{
	int length = a.length(), sum=0;
	for (int i=0;i<length;i++)
	{
		if(a[i] - '0' >= 0 && a[i] - '0' <= 9)
		{
			sum += a[i] - '0';
		}
	}
	
	return sum;
}


bool compare(string a, string b)
{
	if(a.length() < b.length())
	{
		return 1;			
	}
	else if (a.length() > b.length())
	{
		return 0;	
	}
	else 
	{
		int aSum = getSum(a);
		int bSum = getSum(b);
		
		if(aSum != bSum)
		{
			return aSum < bSum;
		}
		else
		{
			return a < b;
		}
	}		
}

int main()
{
	int i;
	cin >> N;
	
	for (i=0;i<N;i++)
	{
		cin >> a[i];
	}
	
	sort(a,a+N,compare);
	
	for (i=0;i<N;i++)
	{
		cout << a[i] << '\n';
	}
	
	return 0;
}
