/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:17:32 by jhong             #+#    #+#             */
/*   Updated: 2021/06/05 13:41:32 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*				ft_memset(void *b, int c, size_t len)
{
	size_t			j;

	j = -1;
	while (++j < len)
		*((char *)b + j) = c;
	return (b);
}

