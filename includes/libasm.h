/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:11:51 by lxuxer            #+#    #+#             */
/*   Updated: 2025/02/04 16:37:23 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
    
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <errno.h>    
# include <stdio.h>     
# include <fcntl.h>

// ----------- Prototipos de funciones obligatorias ----------------

size_t  ft_strlen(const char *s);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char    *ft_strdup(const char *s);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);

#endif