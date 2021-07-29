#include "libft.h"

int		get_len(int n)
{
	int			len;
	len = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);

}

char	*ft_itoa(int n)
{
	int			len;
	int			sign;
	char		*ret;
	long long	tmp;

	sign = n < 0 ? -1 : 1;
	len = get_len(n);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ret[len] = 0;
	len--;
	tmp = n < 0 ? -(long long)n : (long long)n;
	while (len >= 0)
	{
		ret[len] = '0' + tmp % 10;
		tmp /= 10;
		len--;
	}
	if (sign == -1)
		ret[0] = '-';
	return (ret);
}

int main()
{
	int num = 0;
	printf("%s\n", ft_itoa(num));
}
