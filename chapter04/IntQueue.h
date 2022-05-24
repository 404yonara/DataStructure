#ifndef ___IntQueue
#define ___IntQueue


typedef struct 
{
	int	max; // 큐용량
	int	num; // 현재의 요소 개수
	int	front;
	int	rear;
	int	*que;
} IntQueue;

int		Initialize(IntQueue *q, int max);
int		Enque(IntQueue *q, int x);
int		Deque(IntQueue *q, int *x);
int		Peek(const IntQueue *q, int *x);
void	Clear(IntQueue *q);
int		Capacity(const IntQueue *q);
int		Size(const IntQueue *q);
int		IsEmpty(const IntQueue *q);
int		IsFull(const IntQueue *q);
int		Search(const IntQueue *q, int x);
void	Print(const IntQueue *q);
void	Terminate(IntQueue *q);

#endif