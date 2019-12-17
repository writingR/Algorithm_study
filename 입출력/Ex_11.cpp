// sort() 함수 다뤄보기 

#include <iostream>
#include <algorithm>

using namespace std;

int main (void)
{
	int i;
	int arr[10] = {9,5,3,1,4,8,10,6,2,7};
	sort(arr, arr+10);
	
	for(i=0;i<10;i++)
	{
		cout << arr[i] << " ";
	}
}
