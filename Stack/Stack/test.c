#include"Stack.h"

void test1()
{
	ST st;
	StackInit(&st);
	printf("%d \n", StackSize(&st));
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	printf("%d \n", StackSize(&st));
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}

	printf("%d \n", StackSize(&st));
	StackDestroy(&st);
	

}

int main()
{
	test1();
	return 0;
}