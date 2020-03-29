# include <stdio.h>
int main()
{
	long long int fib[1000];
	fib[0] = 1;
	fib[1] = 1;
	
	for(int i = 2; i<=1000; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	long long int x = fib[78];
	long long int y = fib[79];

	for(int i = 0; i < 101; i++)
	{
		//模拟手算除法，除100次 
		int ans = x / y;
		x = (x % y) * 10;
		printf("%d", ans);
	}
	
	return 0; 
}

