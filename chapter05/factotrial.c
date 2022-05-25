#include <stdio.h>

int	factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int	main(void)
{
	int	x;
	printf("정수를 입력하센 : ");
	scanf("%d", &x);
	printf("%d의 팩토리얼은 %d임.\n", x, factorial(x));
	return (0);
}