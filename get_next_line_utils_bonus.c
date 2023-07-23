/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:04:37 by svydrina          #+#    #+#             */
/*   Updated: 2023/06/28 18:23:31 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, char c)
{
	int	i;

	if (!s)
		return (NULL);
	if (c == 0)
	{
		i = ft_strlen(s);
		return (&s[i]);
	}
	i = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;

	if (!s2)
		return (NULL);
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	new = ft_strjoin2(new, s1, s2);
	free(s1);
	return (new);
}

char	*ft_strjoin2(char *new, char *s1, char *s2)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (s1 && s1[i1])
	{
		new[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		new[i1 + i2] = s2[i2];
		i2++;
	}
	new[i1 + i2] = '\0';
	return (new);
}
