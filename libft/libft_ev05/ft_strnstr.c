/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:07:29 by jhong             #+#    #+#             */
/*   Updated: 2021/06/10 14:42:31 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay_len;
	size_t	ned_len;
	size_t	size;

	if (*needle == '\0')
		return ((char *)haystack);
	hay_len = ft_strlen(haystack);
	ned_len = ft_strlen(needle);
	if (hay_len < ned_len || len < ned_len)
		return (0);
	size = hay_len > len ? len : hay_len;
	while (size-- >= ned_len)
	{
		if (ft_memcmp(haystack, needle, ned_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
