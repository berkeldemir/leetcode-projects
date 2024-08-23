#include <stdbool.h>

int timesten(int m)
{
	int toreturn = 1;
	while(m > 0)
	{
		toreturn *= 10;
		m--;
	}
	return (toreturn);
}

bool isPalindrome(int x)
{
	if (x < 0) return false;
	int y = x;
	int n = 0;
	while (y != 0)
	{
		y /= 10;
		n++;
	}
	int m = n;
	while ((m / 2) > 0)
	{
		if ((x % timesten(m) / timesten(m-1)) != (x % timesten(n - m + 1) / timesten (n - m)))
			return false;
		m--;
	}
	return true;
}