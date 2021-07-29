#include <stdio.h>
#include <string.h>

int main()
{
	char *dst;
	char *src;

	dst = NULL;
	src = NULL;
	memmove(dst, src, 10);

	char *dst_;
	char *src_;

	dst_ = NULL;
	src_ = "hello";
	// memmove(dst_, src_, 3);

	char *dst__;
	char *src__;

	dst__ = "hello";
	src__ = NULL;
	// memmove(dst__, src__, 3);

	int src___[] = {1, 2, 3, 4, 5, 6, 7};
	int dst___[7];
	int dst____[3];
	int dst_____[9];

	memmove(dst___, src___, sizeof(src___));
	memmove(dst____, src___, sizeof(int) * 3);
	memmove(dst_____, src___, sizeof(src___));

	for (int i = 0; i < 7; i++)
		printf("%d\n", dst___[i]);

	printf("\n");

	for (int i = 0; i < 3; i++)
		printf("%d\n", dst____[i]);

	printf("\n");

	for (int i = 0; i < 9; i++)
		printf("%d\n", dst_____[i]);

	char	dst______[30] = "this function is memmove";
	char	*src____;

	src____ = "abcde";

	memmove(dst______, src____, sizeof(char) * 5);

	printf("%s\n", dst______);

	char str[] = "This is memmove";

	memmove(str, str + 2, sizeof(char) * 4);

	printf("%s\n", str);

	char str_[] = "This is memmove";

	memmove(str_ + 2, str_, sizeof(char) * 4);

	printf("%s\n", str_);
}

