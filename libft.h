/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:54:11 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/12 07:54:13 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
size_t	ft_strlen(const char *s);
int	ft_isascii(int c);
int	ft_isprint(int c);
void *ft_memset(void *b, int c, size_t len);
void *ft_memmove(void *dest, const void *src, size_t len);
void ft_putchar_fd(char c);
void ft_putendl_fd(char str);
int	ft_atoi(const char *str);
void	ft_bzero(void *b, size_t len);
void	*ft_calloc(size_t count, size_t size);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	ft_putnbr_fd(int nb,int fd);
void	ft_putstr_fd(char *s, int fd);
char    **ft_split(char const *s, char c);
char *ft_strchr(char *s,int c);
char *ft_strdup(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src,size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(char *hystack, char *needle, size_t n);
char *ft_strrchr(char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start,size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
#endif