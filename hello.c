#include "stdio.h"


int print_hello(int num)
{
	for(int i = 0; i < num; i++){
		printf("hello\r\n");
	}
	return num;
}
