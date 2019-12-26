#include <iostream>
#include <stack>
// Ω∫≈√ (stack)
using namespace std;

int main(void)
{
	
	stack <int> st;
	
	st.push(4);
	st.push(5);
	st.push(9);										
	st.push(6);
	st.pop();
	st.push(1);
	st.push(2);
	st.pop();
	
	while(!st.empty())
	{
		cout << st.top() << ' ';
		st.pop();
	}
		
	return 0;
}
