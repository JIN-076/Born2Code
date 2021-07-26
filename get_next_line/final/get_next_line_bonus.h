/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:27:28 by jhong             #+#    #+#             */
/*   Updated: 2021/07/26 18:28:08 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 42

# endif

char	*get_next_line(int fd);

size_t	gnl_strlen(const char *s);
size_t	gnl_strlcpy(char *dst, const char *src, size_t size);
size_t	gnl_strlcat(char *dst, const char *src, size_t size);
int		gnl_strchr(const char *s, int c);
char	*gnl_substr(char const *s, unsigned int start, size_t len);

char	*delete_buffer(char *buf, char *line);
char	*insert_buffer(char *buf, int fd);
char	*new_read(int fd);

#endif
