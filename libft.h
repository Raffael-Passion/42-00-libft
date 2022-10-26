/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:46:32 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 19:37:47 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t n, size_t size);
int     ft_isalnum(int i);
int     ft_isalpha(int i);
int     ft_isascii (int i);
int     ft_isdigit (int i);
int     ft_isprint (int i);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *b, int c, size_t n);
char    *ft_strchr(const char *str, int c);
char    *ft_strdup(const char *s);
int     ft_strlcat(char *dst, const char *src, size_t n);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int *size);
int     ft_strlen(char *str);
int     ft_strncmp(const char *str1, const char *str2, int n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t n);
char    *ft_strrchr(const char *str, int c);
int     ft_tolower(int i);
int     ft_toupper(int i);

#endif