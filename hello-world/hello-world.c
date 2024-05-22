#include <stdio.h>
#include "another-file.h"

int main(void)
{
	int a = 1;
	printf("hello world!\n");
	printf("a = %d\n", a);
	a = addOne(a);
	printf("a = %d\n", a);	
}
