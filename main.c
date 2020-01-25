#include <stdio.h>
#include "test.h"

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("kostya");
	int i;
	scanf("%d", &i);
	func(i);
	return 0;
}