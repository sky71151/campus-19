#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *str);
void    *ft_memset(void *ptr, int value, size_t num);
void    ft_bzero(void *ptr, size_t num);
void    *ft_memcpy(void *destination, const void *source, size_t num);
size_t strlcpy(char *dest, const char *src, size_t size);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
void *ft_memchr(const void *ptr, int value, size_t num) ;
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char *ft_strnstr(const char *source, const char *search, size_t len);
int	ft_atoi(const char *str);
void *ft_calloc(size_t num_elements, size_t element_size);
char *ft_strdup(const char *source);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(const char *s1, const char *s2);



#endif