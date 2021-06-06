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

char		*ft_strdup(const char *src)
{
	int		i;
	char	*dupstr;

	dupstr = malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = -1;
	while (src[++i] != '\0')
		dupstr[i] = src[i];
	dupstr[i] = 0;
	return (dupstr);
}
