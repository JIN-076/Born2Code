#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		if (*((char *)src + i) == (unsigned char)c)
			return (dst + i + 1);
	}
	return (0);
}

int main()
{
	char *src = "my name is src";
	char dst[] = "my name is dst";
	char dst_[] = "GeeksForGeeks is for Programming geeks.";
	char dst__[] = "GeeksForGeeks is for Programming geeks.";
	char dst___[] = "Oh you will find the word";
	char dst____[] = "Oh you will find the word";

	puts("------------this is original memccpy function------------");

	ft_memccpy(dst, src, 'r', strlen(src));
	ft_memccpy(dst_, "oh my mistake", 'e', 14);
	ft_memccpy(dst__ + 5, "oh my mistake", 'e', 14);
	ft_memccpy(dst___, "you cannot", 'h', 10);
	ft_memccpy(dst____, "you cannot", 'h', 11);

	puts("case 1 : find the keyword in size_t len");
	printf("%s\n", dst);
	puts("case 2 : find the keyword in size_t len with null");
	printf("%s\n", dst_);
	puts("case 3 : find the keyword in size_t len in different start address");
	printf("%s\n", dst__);
	puts("case 4 : could not find the keyword in size_t len");
	printf("%s\n", dst___);
	puts("case 5 : could not find the keyword in size_t len with null");
	printf("%s\n", dst____);
}
