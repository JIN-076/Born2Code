/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:42:37 by jhong             #+#    #+#             */
/*   Updated: 2021/06/23 20:06:48 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		i;
	char	*dupstr;

	if (!(dupstr = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	i = -1;
	while (src[++i] != '\0')
		dupstr[i] = src[i];
	dupstr[i] = 0;
	return (dupstr);
}
