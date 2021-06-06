/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:47:58 by jhong             #+#    #+#             */
/*   Updated: 2021/06/05 16:37:50 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	tmp = ft_strlen(src);
	if (!dst || !src)
		return (0);
	while (i < tmp && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (tmp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*tmp;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
	{
		if (end - 1 < 1)
			break;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	if (!(tmp = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(tmp, s1 + start, end - start + 1);
	return (tmp);
}
