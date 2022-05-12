#include <stdio.h>
#include <stdlib.h>

int	bin_search(const int *a, int n, int key)
{
	int	pl = 0;
	int	pr = n - 1;
	int	pc;
	do
	{
		pc = (pl + pr) / 2;
		if (a[pc] == key)
			return (pc);
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	}	while (pl <= pr);
	return (-1);
}

int	main(void)
{
	int	i, nx, ky, idx;
	int	*x;
	puts("이진 검색");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	
}