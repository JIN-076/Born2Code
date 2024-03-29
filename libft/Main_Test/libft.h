#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
char			*ft_strdup(const char *src);
char			*ft_strchr(const char *s, int c);
void			*ft_memset(void *b, int c, size_t len);
void			*memmmove(void *dst, const void *src, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
void			*calloc(size_t count, size_t size);
void			ft_bzero(void *dest, size_t len);
int				ft_atoi(const char *str);

char			*ft_strjoin(char const *s1, char const *s2);
