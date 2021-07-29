#include "libft.h"

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n-- && *s1 && *s1 == *s2)
	{
		if (n == 0)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
