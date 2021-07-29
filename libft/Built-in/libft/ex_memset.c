//#include <memory.h>
#include <string.h>
#include <stdio.h>

int main()
{
	int arr[100];

	char *str = NULL;

	memset(arr, 2, 20 * sizeof(int));
	memset(str, 'c', sizeof(char));

	puts(str);

	int i;

	i = -1;
	while (++i < 20)
		printf("%d\n", arr[i]);
}


