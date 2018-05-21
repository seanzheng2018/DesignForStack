#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int a[5] = {0};
int b[5] = {0};

int main()
{
	int arr[5] = {0,1,2,3,4};
	int arrForRange[6] = {3,4,6,7,8,0};
	int tmp = 0;
	int i = 0;
	Stack stack1 = newStack(a);
	Stack stack2 = newStackWithRange(b,2,7);

	pop(&stack1, &tmp);
	for(i = 0;i < 5;i++)
	{
		push(&stack1, arr[i]);
	}
	push(&stack1, 100);
	for(i = 0;i < 5;i++)
	{
		pop(&stack1, &tmp);
		printf("Stack1 index %d = %d\n",5-i, tmp);
	}
	for(i = 0;i < 5;i++)
	{
		push(&stack2, arrForRange[i]);
	}
	push(&stack2, 100);
	for(i = 0;i < 5;i++)
	{
		pop(&stack2, &tmp);
		printf("Stack2 index %d = %d\n",5-i, tmp);
	}
	return 0;
}
