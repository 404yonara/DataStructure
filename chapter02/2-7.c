
#include <stdio.h>
#include <stdlib.h>


#define swap(type, x, y) do{ type t = x; x = y; y = t;}while(0)


void	ary_reverse(int *a, int n)
{
	int	i;
	i = 0;
	while (i < n / 2)
	{
		swap(int, a[i], a[n - 1 -i]);
		i++;
	}
}

int	main(void)
{
	int	i;
	int	*x;
	int	nx;

	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요.\n", nx);
	i = 0;
	while (i < nx)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
		i++;
	}
	ary_reverse(x, nx);
	printf("배열의 요소를 역순으로 정렬했습니다.\n");
	i = 0;
	while (i < nx)
	{
		printf("x[%d] = %d\n", i, x[i]);
		i++;
	}
	free(x);

	return 0;
}