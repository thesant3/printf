#include "lib_printf.h"
#include <stdio.h>  // Para comparar con printf

int main(void)
{
	int a = 8765;
	printf("%s %c felicidades %d -  %i - %x - %X - %% - %p - %u \n hrthrt %k" ,"hol", 'M', 45, 6, 123456, 6543, &a, -789851);

	return (0);
}

