#include <stdio.h>
#include <stdlib.h>
#include "IntQueue.h"

int	Initialize(IntQueue *q, int max)
{
	q->num = 0;
	q->front = 0;
	q->rear = 0;
	q->que = (int *)calloc(max, sizeof(int));
	if (!(q->que))
	{
		q->max = 0;
		return (-1);
	}
	return (0);
}

int	Enque(IntQueue *q, int x)
{
	if (q->num >= q->max)
		return (-1);
	else
	{
		q->que[q->rear++];
		q->num++;
		if (q->rear == q->max)
			q->rear = 0;
		return (0);
	}
}

int	Deque(IntQueue *s, int *x)
{
	if (q->num <= 0)
		return (-1);
	else
	{
		q->num--;
		*x = q->que[q->front++];
		if (q->front == q->max)
			q->front = 0;
		return (0);
	}
}

int	Peek(const IntQueue *s, int *x)
{
	if (q->num <= 0)
		return (-1);
	*x = q->que[q->front];
	return (0);
}

void	Clear(IntQueue *s)
{
	q->num = 0;
	q->front = 0;
	q->rear = 0;
}

int	Capacity(const IntQueue *s)
{
	return (q->max);
}

int	Size(const IntQueue *s)
{
	return (q->num);
}

int	IsEmpty(const IntQueue *s)
{
	return (q->num <= 0);
}

int	Isfull(const IntQueue *s)
{
	return (q->num >= q->max);
}

int	Search(const IntQueue *s, int x)
{
	int	i;
	int	idx;
	
	i = 0;
	while (i < q->num)
	{
		if (q->que[q->front + i] == x)
			return (q->front + i);
			
	}
}