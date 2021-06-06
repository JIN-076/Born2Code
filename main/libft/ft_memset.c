#include "libft.h"

void*				ft_memset(void *b, int c, size_t len)
{
	size_t			j;

	j = -1;
	while (++j < len)
		*((char *)b + j) = c;
	return (b);
}

int					main(void)
{
	char str[6] = "hello";
	char *str_ = NULL;
	char alpha = 'A';
	puts("--------------string for memset--------------");
	puts(str_);
	ft_memset(str_, alpha, sizeof(str) - 1);

	printf("size : %lu\n", sizeof(str) - 1);
	puts(str_);

	puts("--------------integer for memset--------------");

	int array[10];

	ft_memset(array, 1, sizeof(array));

	printf("size : %lu\n", sizeof(array));
	printf("size : %lu\n", sizeof(int) * 10);

	for (int i = 0; i < (sizeof(array) / sizeof(int)); i++)
		printf("%d\n", array[i]);
}
