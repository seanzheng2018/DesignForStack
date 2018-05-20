#include "../inc/stack.h"
#include <stdio.h>

#define MaxStackLenth 20
static int stackArr[MaxStackLenth] = {0};
static int stackTop = 0;

static bool isEmpty(void)
{
	return 0 == stackTop;
}

static bool isFull(void)
{
	return MaxStackLenth == stackTop;
}

bool push(int val)
{
	if(isFull())
	{
		printf("The stack is full, no place to push element!\n");
		return false;
	}
	stackArr[stackTop++] = val;
	return true;
}

bool pop(int *pRet)
{
	if(isEmpty())
	{
		printf("The stack is empty, no element to pop!\n");
		return false;
	}
	*pRet = stackArr[--stackTop];
	return true;
}


