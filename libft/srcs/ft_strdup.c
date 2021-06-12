/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:42:37 by jhong             #+#    #+#             */
/*   Updated: 2021/06/10 15:10:03 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		i;
	char	*dupstr;

	dupstr = malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = -1;
	while (src[++i] != '\0')
		dupstr[i] = src[i];
	dupstr[i] = 0;
	return (dupstr);
}
