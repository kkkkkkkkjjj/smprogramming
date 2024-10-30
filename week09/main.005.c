#include <stdio.h>
static int all_flies;

extern void sub();

int main(void)
{
	sub();
	printf("%d\n",all_flies);
	return 0;
}
