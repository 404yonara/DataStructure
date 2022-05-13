#include <stdio.h>
#include <stdlib.h>

void	printf_row(const int *a, int n, int idx)
{
	int	i;
	int	origin;
	origin = idx;
	printf("   |  \n");
	printf("   |  ");
	while (idx--)
		printf("    ");
	idx = origin;
	printf("*\n  %d|  ", idx);
	for (i = 0; i < n; i++)
		printf("%d   ", a[i]);
	printf("\n");
}

int	search(const int *a, int n, int key)
{
	int	i = 0;
	// while(1)
	// {
	// 	if(i == n)
	// 		return (-1);
	// 	if(a[i] == key)
	// 		return (i);
	// 	i++;
	// }
	printf("   |  ");
	for (i = 0; i < n; i++)
		printf("%d   ", i);
	printf("\n---+--");
	for (i = 0; i < n; i++)
		printf("----");
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf_row(a, n, i);
		if (a[i] == key)
			return (i);
	}
	return (-1);
}

int	main(void)
{
	int	i, nx, ky, idx;
	int	*x;
	puts("선형 검색");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for(i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값 : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if(idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
	free(x);

	return (0);
}