#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "LinkedList.h"

static Node	*AllocNode(void)
{
	return ((Node *)calloc(1, sizeof(Node)));
} // Node형 객체를 만들고 객체의 포인터를 반환.

static void	SetNode(Node *n, const Member *x, const Node *next)
{
	n->data = *x;
	n->next = next;
} // Node형 객체의 멤버(data, next)를 설정하는 함수.

void	Initialize(List *list)
{
	list->head = NULL;
	list->crnt = NULL;
} // 연결 리스트를 초기화. 

Node	*search(List *list, const Member *x, int compare(const Member *x, const Member *y))
{
	Node	*ptr;
	ptr = lsit->head;
	while (ptr)
	{
		if (compare(&ptr->data, x) == 0)
		{
			list->crnt = ptr;
			return ptr;
		}
		ptr = ptr->next;
	}
	return (NULL);
}

void	InsertFront(List *list, const Member *x)
{
	Node	*ptr;
	ptr = list->head;
	list->head = list->crnt = AllocNode();
	SetNode(list->head, x, ptr);
}

void	InsertRear(List *list, const Member *x)
{
	if (!list->head)
		InsertFront(list, x);
	else
	{
		Node	*ptr;
		ptr = list->head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = list->crnt = AllocNode();
		SetNode(ptr->next, x, NULL);
	}
}

void	RemoveFront(List *list)
{
	if (list->head)
	{
		Node	*ptr;
		ptr = list->head->next;
		free(list->head);
		list->head = list->crnt = ptr;
	}
}

void	RemoveRear(List *list)
{
	if (list->head)
	{
		if (!(list->head->next))
		{
			RemoveFront(list);
		}
		else
		{
			Node	*ptr;
			Node	*pre;
			ptr = list->head;
			while (ptr->next)
			{
				pre = ptr;
				ptr = ptr->next;
			}
			pre->next = NULL;
			free(ptr);
			list->crnt = pre;
		}
	}
}

void	RemoveCurrent(List *list)
{
	if (list->head)
	{
		if (list->head == list->crnt)
			RemoveFront(list);
		else
		{
			Node	*ptr;
			ptr = list->head;
			while (ptr->next != list->crnt)
				ptr = ptr->next;
			ptr->next = list->crnt->next;
			free(list->crnt);
			list->crnt = ptr;
		}
	}
}

void	Clear(List *list)
{
	while (list->head)
		RemoveFront(list);
	list->crnt = NULL;
}

void	PrintCurrent(const List *list)
{
	if (!list->crnt)
		printf("선택한 노드가 없슴다.");
	else
		PrintMember(&list->crnt->data);
}

void	PrintLnCurrent(const List *list)
{
	PrintCurrent(list);
	putchar('\n');
}