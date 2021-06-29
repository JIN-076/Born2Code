/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:41:54 by jhong             #+#    #+#             */
/*   Updated: 2021/06/12 16:24:45 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	find;
	size_t	s_len;

	ptr = (char *)s;
	find = (char)c;
	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if (ptr[s_len] == c)
			return (ptr + s_len);
		s_len--;
	}
	if (ptr[s_len] == find)
		return (ptr);
	return (0);
}
