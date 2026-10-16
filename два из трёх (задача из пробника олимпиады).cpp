#include <stdio.h>
int main(){
    long long a, b, c, n; //используем long long, т.к. по условию (1 <= a, b, c <= 10^6)
	scanf("%lld%lld%lld", &a, &b, &c);
	scanf("%lld", &n);
	
	long long ogranichenie = 1000000000000000000; //используем long long, т.к. по условию (1 <= n <= 10^8)
	int count = 0;
	
	for (long long x = 1; x <= ogranichenie; x = x + 1 )
	{
		int divisible = 0;
		
		if (x % a == 0) divisible = divisible + 1;
		if (x % b == 0) divisible = divisible + 1;
		if (x % c == 0) divisible = divisible + 1;
		
		if (divisible == 2)
		{
			count++;
			if (count == n) {
				printf("%lld", x);
				return 0;
			}
		}
	}
	printf("-1");
	return 0;
}
