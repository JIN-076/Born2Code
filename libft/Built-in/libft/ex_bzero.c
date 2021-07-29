#include <strings.h>
#include <stdio.h>

int main()
{
	int array[10];

	bzero(array, sizeof(array));

	puts("--------------integer for bzero--------------");

	printf("size : %lu\n", sizeof(array));

	for (int i = 0; i < (sizeof(array) / sizeof(int)); i++)
		printf("%d\n", array[i]);
}
