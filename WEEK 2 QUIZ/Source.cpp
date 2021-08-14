#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x, y, z;
	scanf("%d\n%d\n%d", &x, &y, &z);
	if (x - y > 1)
	{
		if (x - z > 1)
		{
			printf("Most number is : %d", x);
		}
	}
	else
	{
		if (y - z > 1)
		{
			printf("Most number is : %d", y);
		}
		else
		{
			printf("Most number is : %d", z);
		}
	}
}