/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:49:52 by jhong             #+#    #+#             */
/*   Updated: 2021/06/05 14:38:29 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	j;

	j = -1;
	while (++j < len)
		*((char *)b + j) = c;
	return (b);
}

void		ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}

void		*calloc(size_t count, size_t size)
{
	void *ptr;

	if (count == 0 || size == 0) {
		count = 1;
		size = 1;
	}

	ptr = malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);

	return (ptr);
}

