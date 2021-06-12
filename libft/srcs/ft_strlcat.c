/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:45:45 by jhong             #+#    #+#             */
/*   Updated: 2021/06/10 14:47:41 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest[i] != '\0')
		if (i++ < size)
			dest_len++;
	while (i + 1 < size && *src != '\0')
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest_len + src_len);
}
