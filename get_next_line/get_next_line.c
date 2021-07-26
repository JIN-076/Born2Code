/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:19:24 by jhong             #+#    #+#             */
/*   Updated: 2021/07/26 18:12:30 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*get_next_line(int fd)
{
	static char		*buf[4096];
	char			*line;
	size_t			old_len;

	if (fd < 0 || fd > 4096 || BUFFER_SIZE < 0)
		return (NULL);
	line = NULL;
	if (gnl_strchr(buf[fd], '\n') == -1)
	{
		old_len = gnl_strlen(buf[fd]);
		buf[fd] = gnl_expand_buffer(buf[fd], fd);
		if (old_len == gnl_strlen(buf[fd]) && buf[fd])
			line = gnl_substr(buf[fd], 0, gnl_strlen(buf[fd]));
	}
	if (!buf[fd])
		return (NULL);
	if (!line && gnl_strchr(buf[fd], '\n') != -1)
		line = gnl_substr(buf[fd], 0, gnl_strchr(buf[fd], '\n') + 1);
	if (line)
	{
		buf[fd] = gnl_shrink_buffer(buf[fd], line);
		return (line);
	}
	return (get_next_line(fd));
}

char		*gnl_shrink_buffer(char *buf, char *line)
{
	char		*new_buf;
	int			line_len;

	if (!buf || !line)
		return (buf);
	line_len = gnl_strlen(line);
	if ((int)gnl_strlen(buf) == line_len)
	{
		free(buf);
		return (NULL);
	}
	new_buf = gnl_substr(buf, line_len, gnl_strlen(buf) - line_len);
	free(buf);
	return (new_buf);
}

char		*gnl_expand_buffer(char *buf, int fd)
{
	char		*new_buf;
	int			new_len;
	char		*aux;

	aux = gnl_new_read(fd);
	if (!aux)
		return (NULL);
	if (!aux[0])
	{
		free(aux);
		return (buf);
	}
	if (!buf)
		return (aux);
	new_len = gnl_strlen(buf) + gnl_strlen(aux);
	new_buf = malloc(new_len + 1);
	if (!new_buf)
		return (NULL);
	gnl_strlcpy(new_buf, buf, new_len + 1);
	gnl_strlcat(new_buf, aux, new_len + 1);
	free(buf);
	free(aux);
	return (new_buf);
}

char		*gnl_new_read(int fd)
{
	char		*aux;
	int			nbytes;

	aux = malloc(BUFFER_SIZE + 1);
	if (!aux)
		return (NULL);
	nbytes = read(fd, aux, BUFFER_SIZE);
	if (nbytes < 0)
	{
		free(aux);
		return (NULL);
	}
	aux[nbytes] = '\0';
	return (aux);
}
