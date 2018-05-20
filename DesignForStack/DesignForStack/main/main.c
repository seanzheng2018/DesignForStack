#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int a[5] = {0};

int main()
{
	int arr[5] = {0,1,2,3,4};
	int tmp = 0;
	int i = 0;
	Stack stack = newStack(a);

	pop(&stack, &tmp);
	for(i = 0;i < 5;i++)
	{
		push(&stack, arr[i]);
	}
	push(&stack, 100);
	pop(&stack, &tmp);
	printf("tmp = %d\n",tmp);
	return 0;
}
