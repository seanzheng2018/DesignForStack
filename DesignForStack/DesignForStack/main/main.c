#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
	int arr[5] = {0,1,2,3,4};
	int tmp = 0;
	int i = 0;

	pop(&tmp);
	for(i = 0;i < 5;i++)
	{
		push(arr[i]);
	}
	pop(&tmp);
	printf("tmp = %d\n",tmp);
	return 0;
}
