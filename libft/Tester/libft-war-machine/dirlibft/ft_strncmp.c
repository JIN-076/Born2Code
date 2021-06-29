/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:49:25 by jhong             #+#    #+#             */
/*   Updated: 2021/06/10 14:39:09 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	if (b1 == 0 && b2 == 0)
		return (0);
	else if (b1 == 0 || b2 == 0)
		return (b1 == 0 ? -1 : 1);
	if (n == 0)
		return (0);
	i = 0;
	while ((b1[i] != '\0') && (b2[i] != '\0') && i < (n - 1))
	{
		if (b1[i] != b2[i])
			break ;
		i++;
	}
	return (b1[i] - b2[i]);
}
