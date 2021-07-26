#include <string.h>
#include <stdio.h>

int main()
{
	char *src = "my name is src";
	char dst[] = "my name is dst";
	char dst_[] = "GeeksForGeeks is for Programming geeks.";
	char dst__[] = "GeeksForGeeks is for Programming geeks.";
	char dst___[] = "Oh you will find the word";
	char dst____[] = "Oh you will find the word";

	puts("------------this is original memccpy function------------");

	memccpy(dst, src, 'r', strlen(src));
	memccpy(dst_, "oh my mistake", 'e', 14);
	memccpy(dst__ + 5, "oh my mistake", 'e', 14);
	memccpy(dst___, "you cannot", 'h', 10);
	memccpy(dst____, "you cannot", 'h', 11);

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
