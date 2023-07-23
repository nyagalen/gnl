/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 23:23:23 by svydrina          #+#    #+#             */
/*   Updated: 2023/06/26 20:10:43 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>

int		ft_strlen(char *str);
char	*ft_strchr(char *str, char c);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strjoin2(char *new, char *str1, char *str2);
char	*get_next_line(int fd);

#endif
