/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:31:39 by svydrina          #+#    #+#             */
/*   Updated: 2023/06/26 20:10:13 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>

int		ft_strlen(char *s);
char	*ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoin2(char *new, char *s1, char *s2);
char	*get_next_line(int fd);

#endif
