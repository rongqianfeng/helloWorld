#include <stdio.h>
#include <stdlib.h>
#include <hello.h>

int main(void)

{
	char *str"hello world!\n";
	print(str);
	return 0;
}

void print(char *str)
{
	printf(str);
	return;
}

void hello()
{
	return;
}
