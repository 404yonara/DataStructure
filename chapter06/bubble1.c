#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do{ type t = x; x = y; y = t; }while(0)

void	bubble(int *a, int n)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < n)
	{
		j = n - 1;
		while (j > i)
		{
			if(a[j - 1] > a[j])
				swap(int, a[j - 1], a[j]);
			j--;
		}
		i++;
	}
}

int	main(void)
{
	int	i;
	int	nx;
	int	*x;

	puts("버블 정렬");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = (int *)calloc(nx, sizeof(int));

	i = 0;
	while (i < nx)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
		i++;
	}

	bubble(x, nx);

	puts("오름차순으로 정렬했습니다.");
	i = 0;
	while (i < nx)
	{
		printf("x[%d] : %d\n", i, x[i]);
		i++;
	}

	free(x);

	return (0);
}