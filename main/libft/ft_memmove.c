#include "libft.h"

void*		memmmove(void *dst, const void *src, size_t len)
{
	void * ret = dst;

	size_t	i;

	i = -1;

	if (dst <= src || (char *)dst >= ((char *)src + len))
		return ret;
	else {
		dst = (char *)dst + len - 1;
		src = (char *)src + len - 1;
		while (++i < len)
		*((char *)dst - i) = *((char *)src - i);
	}
	return (dst);
}

int			main(void)
{

}
