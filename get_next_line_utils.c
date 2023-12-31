/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:21:58 by svydrina          #+#    #+#             */
/*   Updated: 2023/06/26 16:49:00 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	int	len;
	int	i;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	i = 0;
	if (c == 0)
		return (&str[len]);
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*new;

	if (!str2)
		return (NULL);
	new = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!new)
		return (NULL);
	new = ft_strjoin2(new, str1, str2);
	free(str1);
	return (new);
}

char	*ft_strjoin2(char *new, char *str1, char *str2)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (!new || !str2)
		return (NULL);
	while (str1 && str1[i])
	{
		new[i] = str1[i];
		i++;
	}
	while (str2[i2])
	{
		new[i + i2] = str2[i2];
		i2++;
	}
	new[i + i2] = '\0';
	return (new);
}
