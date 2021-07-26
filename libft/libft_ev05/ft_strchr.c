/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:03:13 by jhong             #+#    #+#             */
/*   Updated: 2021/06/10 18:49:31 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	tmp;
	char	*stmp;

	i = 0;
	tmp = (char)c;
	stmp = (char *)s;
	while (stmp[i] != tmp)
	{
		if (stmp[i] == '\0')
			return (NULL);
		i++;
	}
	return (&stmp[i]);
}
