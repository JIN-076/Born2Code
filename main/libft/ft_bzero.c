#include "libft.h"

char		*ft_memset(void *b, int c, size_t len)
{
	size_t	j;

	j = -1;
	while (++j < len)
		*((char *)b + j) = c;
	return (b);
}

void		ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}

int main()
{
	int array[10];

	ft_bzero(array, sizeof(array));

	for (int i = 0; i < (sizeof(array) / sizeof(int)); i++)
		printf("%d\n", array[i]);
}
