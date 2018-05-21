#ifndef _STACK_H_
#define _STACK_H_

#include <stddef.h>
#include "bool.h"

typedef struct
{
	int top;
	const size_t size;
	int * const pBuf;

	const bool isNeedRangeCheck;
	const int Min;
	const int Max;
}Stack;

#define newStack(buf) {						\
	0, sizeof(buf) / sizeof(int), (buf),	\
	false, 0, 0								\
}

#define newStackWithRange(buf,min,max){				\
	0,sizeof(buf) / sizeof(int), (buf),		\
	true, min, max							\
}

bool push(Stack *p, int val);
bool pop(Stack *p, int *pRet);

#endif



