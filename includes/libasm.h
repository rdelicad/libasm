#ifndef LIBASM_H
# define LIBASM_H
    
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <errno.h>    
# include <stdio.h>     
# include <fcntl.h>
# include <string.h>

// ----------- Prototipos de funciones obligatorias ----------------

size_t  ft_strlen(const char *s);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char    *ft_strdup(const char *s);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);

#endif