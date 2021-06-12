/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:49:52 by jhong             #+#    #+#             */
/*   Updated: 2021/06/10 14:35:13 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(sizeof(count * size))))
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
