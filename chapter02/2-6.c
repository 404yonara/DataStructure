
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int	maxof(const int *a, int n)
{
	int	i;
	int	max = *a;
	for(i = 1; i < n; i++)
		max = (*(a + i) > max) ? *(a + i) : max;
	return max;
}

int	main(void)
{
	int	i;
	int	*height;
	int	number;
	printf("사람 수 : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	srand(time(NULL));
	for(i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("최댓값은 %d입니다.\n", maxof(height, number));
	free(height);

	return 0;
}