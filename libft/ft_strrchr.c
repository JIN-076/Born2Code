/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:41:54 by jhong             #+#    #+#             */
/*   Updated: 2021/06/05 14:28:47 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	int		i;
	int		cnt;

	i = -1;
	cnt = 0;
	while (str[++i] != '\0')
		cnt++;
	return (cnt);
}

char		*ft_strrchr(const char *s, int c)
{
	char *ptr;

	ptr = s + ft_strlen(s) - 1;

	while (ptr > s)
	{
		if (*ptr == c)
			return ptr;
		ptr--;
	}
	return (NULL);
}
