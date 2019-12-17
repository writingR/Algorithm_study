// sort() 함수 , 내림차순 정렬 

#include <iostream>
#include <algorithm>

using namespace std;

bool desc (int a, int b)
{
	return a > b;
}

int main (void)
{
	int i;
	int arr[10] = {9,5,3,1,4,8,10,6,2,7};
	sort(arr, arr+10, desc);
	for(i=0;i<10;i++)
	{
		cout << arr[i] << " ";
	}
}
