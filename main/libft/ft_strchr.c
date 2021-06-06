#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	tmp;
	char	*stmp;

	i = 0;
	tmp = (char)c;
	stmp = (char *)s;
	while (stmp[i] != tmp)
	{
		if (stmp[i] == '\0')
			return (NULL);
		i++;
	}
	return (&stmp[i]);
}
