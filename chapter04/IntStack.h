#ifndef ___InStack
#define ___InStack

typedef struct 
{
	int	max; // 스택용량
	int	ptr; // 스택포인터, 몇개차있는지 알려주는듯?
	int	*stk; // 스택의 주소.
} IntStack;

int		Initialize(IntStack *s, int max);
int		Push(IntStack *s, int x);
int		Pop(IntStack *s, int *x);
int		Peek(const IntStack *s, int *x);
void	Clear(IntStack *s);
int		Capacity(const IntStack *s);
int		Size(const IntStack *s);
int		IsEmpty(const IntStack *s);
int		IsFull(const IntStack *s);
int		Search(const IntStack *s, int x);
void	Print(const IntStack *s);
void	Terminate(IntStack *s);

#endif