/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:17:31 by jhong             #+#    #+#             */
/*   Updated: 2021/06/05 13:41:29 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*		memmmove(void *dst, const void *src, size_t len)
{
	void * ret = dst;

	size_t	i;

	i = -1;

	if (dst <= src || (char *)dst >= ((char *)src + len))
		return ret;
	else {
		dst = (char *)dst + len - 1;
		src = (char *)src + len - 1;
		while (++i < len)
		*((char *)dst - i) = *((char *)src - i);
	}
	return (dst);
}

int			main(void)
{

}
