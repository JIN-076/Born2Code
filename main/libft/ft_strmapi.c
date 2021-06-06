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

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*tmp;

	i = -1;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(tmp = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (++i < len)
		tmp[i] = f(i, s[i]);
	tmp[i] = 0;
	return (tmp);
}

char	f(unsigned int i, char c)
{
	if (i + 1)
	{
		if (ft_isalpha(c))
			c -= 32;
	}
	return (c);
}

int main()
{
	char s[25] = "this function is strmapi";
	printf("%s\n", ft_strmapi(s, f));
}
