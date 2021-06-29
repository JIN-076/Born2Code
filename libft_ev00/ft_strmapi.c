/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:47:58 by jhong             #+#    #+#             */
/*   Updated: 2021/06/10 19:50:30 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*tmp;

	i = -1;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(tmp = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (++i < len)
		tmp[i] = f(i, s[i]);
	tmp[i] = 0;
	return (tmp);
}
