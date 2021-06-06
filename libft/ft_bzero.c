/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:36:19 by jhong             #+#    #+#             */
/*   Updated: 2021/06/05 13:40:51 by jhong            ###   ########.fr       */
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
