/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:47:58 by jhong             #+#    #+#             */
/*   Updated: 2021/06/23 18:11:42 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*tmp;

	i = -1;
	if (s == NULL)
		return (NULL);
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s_len = ft_strlen(s);
	while (++i < len && start + i < s_len)
		tmp[i] = s[start + i];
	tmp[i] = 0;
	return (tmp);
}
