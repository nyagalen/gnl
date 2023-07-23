/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:04:32 by svydrina          #+#    #+#             */
/*   Updated: 2023/06/28 18:12:09 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*before_n(char *s)
{
	int		i;
	int		new_i;
	char	*new;

	i = 0;
	new_i = 0;
	if (!s || !s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] && s[i] == '\n')
		i++;
	new = malloc(i + 1);
	if (!new)
		return (NULL);
	while (new_i < i)
	{
		new[new_i] = s[new_i];
		new_i++;
	}
	new[new_i] = '\0';
	return (new);
}

static char	*after_n(char *s)
{
	int		i;
	int		start;
	char	*new;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\0' || ft_strlen(s) == i + 1)
	{
		free(s);
		return (NULL);
	}
	i += (s[i] == '\n');
	new = malloc(ft_strlen(s) - i + 1);
	if (!new)
		return (NULL);
	while (s[i])
		new[start++] = s[i++];
	new[start] = '\0';
	free(s);
	return (new);
}

char	*get_next_line(int fd)
{
	int			num_bytes;
	char		*buff;
	static char	*rest[1024] = {NULL};

	num_bytes = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	while (!(ft_strchr(rest[fd], '\n')) && num_bytes != 0)
	{
		num_bytes = read(fd, buff, BUFFER_SIZE);
		if (num_bytes == -1 || (!rest[fd] && num_bytes == 0))
		{
			free(buff);
			return (NULL);
		}
		buff[num_bytes] = '\0';
		rest[fd] = ft_strjoin(rest[fd], buff);
	}
	free(buff);
	buff = before_n(rest[fd]);
	rest[fd] = after_n(rest[fd]);
	return (buff);
}
