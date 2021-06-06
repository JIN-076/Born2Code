/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:07:29 by jhong             #+#    #+#             */
/*   Updated: 2021/06/05 14:11:47 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	tmp;

	i = -1;
	while (haystack[i] && ++i < len)
	{
		tmp = 0;
		if (needle[tmp] == haystack[i + tmp])
		{
			while (needle[tmp] && haystack[i + tmp])
			{
				if (needle[tmp] != haystack[i + tmp] || (i + tmp) >= len)
					break;
				tmp++;
			}
			if (needle[tmp] == '\0')
				return (&((char *)haystack)[i]);
		}
	}
	return ((void*)0);
}
