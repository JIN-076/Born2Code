#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	tmp = ft_strlen(src);
	if (!dst || !src)
		return (0);
	while (i < tmp && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (tmp);
}
