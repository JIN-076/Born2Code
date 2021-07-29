#include "libft.h"
#include <fcntl.h>
#include <limits.h>

void	ft_putnbr(int n, int fd)
{
	if (n >= 10)
		ft_putnbr(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	ft_putnbr(n, fd);

}

int main()
{
	int fd;

	fd = open("test", O_WRONLY);
	puts("case 1 : put the output in file");
	ft_putnbr_fd(INT_MAX, fd);

	puts("case 2 : put the output in terminal");
	ft_putnbr_fd(INT_MAX, 1);
	printf("\n");
	ft_putnbr_fd(INT_MIN, 1);
}
