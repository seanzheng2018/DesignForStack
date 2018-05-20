#ifndef _STACK_H_
#define _STACK_H_

#include <stddef.h>
#include "bool.h"

typedef struct
{
	int top;
	const size_t size;
	int * const pBuf;
}Stack;

#define newStack(buf) {						\
	0, sizeof(buf) / sizeof(int), (buf)		\
}

bool push(Stack *p, int val);
bool pop(Stack *p, int *pRet);

#endif



