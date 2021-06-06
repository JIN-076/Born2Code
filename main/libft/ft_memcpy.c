#include "libft.h"
#include <string.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (++i < n)
		*((char *)dst + i) = *((char *)src + i);
	return (dst);
}

int			main(void)
{
	char dst[30] = "1234";
	char *src = "4321";

	char original_dst[30] = "1234";
	char *original_src = "4321";

	puts("-------------this is re-code ft_memcpy-------------");
	ft_memcpy(dst, src, 2);

	printf("%s\n", dst);

	puts("-------------this is original memcpy-------------");
	memcpy(original_dst, original_src, 2);

	printf("%s\n", original_dst);
}
