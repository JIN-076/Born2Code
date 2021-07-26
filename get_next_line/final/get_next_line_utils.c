/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:12:28 by aperez-b          #+#    #+#             */
/*   Updated: 2021/07/26 18:12:07 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*gnl_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	new_len;
	char	*tmp;

	i = -1;
	if (s == NULL)
		return (NULL);
	s_len = gnl_strlen(s);
	if ((unsigned int)s_len < start)
	{
		tmp = (char *)malloc(1);
		if (tmp == NULL)
			return (NULL);
		tmp[0] = '\0';
		return (tmp);
	}
	new_len = gnl_strlen(s + start);
	if (new_len < len)
		len = new_len;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	gnl_strlcpy(tmp, s + start, len + 1);
	return (tmp);
}

size_t	gnl_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	tmp = gnl_strlen(src);
	if (!dst || !src)
		return (0);
	while (i < tmp && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (tmp);
}

int	gnl_strchr(const char *s, int c)
{
	unsigned char	tmp;
	int				i;

	i = 0;
	if (!s)
		return (-1);
	tmp = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == tmp)
			return (i);
		i++;
	}
	if (tmp == '\0')
		return (i);
	return (-1);
}

size_t	gnl_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = gnl_strlen(src);
	dest_len = gnl_strlen(dst);
	i = 0;
	if (size < dest_len + 1)
		return (size + src_len);
	if (size > dest_len + 1)
	{
		while (src[i] != '\0' && dest_len + 1 + i < size)
		{
			dst[dest_len + i] = src[i];
			i++;
		}
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
