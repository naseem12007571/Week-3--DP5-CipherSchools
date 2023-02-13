#include <iostream>
using namespace std;

int fibo_helper(int n, int* ans)
{


	if (n <= 1) {
		return n;
	}

	
	if (ans[n] != -1) {
		return ans[n];
	}


	int x = fibo_helper(n - 1, ans);
	int y = fibo_helper(n - 2, ans);

	
	ans[n] = x + y;

	
	return ans[n];
}

int fibo(int n)
{
	int* ans = new int[n + 1];

	
	for (int i = 0; i <= n; i++) {
		ans[i] = -1;
	}
	fibo_helper(n, ans);
}


int main()
{
	int n = 5;

	
	cout << fibo(n);
	return 0;
}
