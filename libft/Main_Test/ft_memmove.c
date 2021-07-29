#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		i = -1;
		while (++i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = len;
		while (i)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dst);
}

int			main(void)
{
	char str[] = "This is memmove";

	ft_memmove(str, str + 2, sizeof(char) * 4);

	printf("%s\n", str);

	char str_[] = "This is memmove";

	ft_memmove(str_ + 2, str_, sizeof(char) * 4);

	printf("%s\n", str_);
}
