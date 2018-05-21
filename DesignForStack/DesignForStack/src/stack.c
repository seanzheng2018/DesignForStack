#include "../inc/stack.h"
#include <stdio.h>

static bool isEmpty(const Stack *p)
{
	return 0 == p->top;
}

static bool isFull(const Stack *p)
{
	return p->size == p->top;
}

static bool isRangeOK(const Stack *p, int val)
{
	return (!p->isNeedRangeCheck) || (val <= p->Max && val >= p->Min);
}

bool push(Stack *p, int val)
{
	if(!isRangeOK(p,val))
	{
		printf("The value is over the range!\n");
		return false;
	}
	if(isFull(p))
	{
		printf("The stack is full, no place to push element!\n");
		return false;
	}
	p->pBuf[p->top++] = val;
	return true;
}

bool pop(Stack *p, int *pRet)
{
	if(isEmpty(p))
	{
		printf("The stack is empty, no element to pop!\n");
		return false;
	}
	*pRet = p->pBuf[--p->top];
	return true;
}


