/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwsong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:14:25 by hwsong            #+#    #+#             */
/*   Updated: 2022/01/31 20:15:10 by hwsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
#include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_readstr(int fd, char *left_str);

size_t	ft_strlen(char *s);
char    *ft_strchr(char *s, int c);
char    *ft_strjoin(char *str, char *buff);

char	*ft_oneline(char *str);
char	*ft_newstr(char *str);


#endif
