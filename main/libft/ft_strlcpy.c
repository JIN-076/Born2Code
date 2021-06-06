#include "libft.h"

size_t		ft_strlen(const char *str)
{
	int		i;
	int		cnt;

	i = -1;
	cnt = 0;
	while (str[++i] != '\0')
		cnt++;
	return (cnt);
}

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
