/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:58:54 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/26 11:33:49 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

//int	ft_isalpha(int c);

//int	ft_isdigit(int c);

//int ft_isalnum(int c);

//int ft_isascii(int c);

//int ft_isprint(int c);

size_t ft_strlen(const char *str);

//void *ft_memset(void *s, int c, size_t n);

//void *ft_memmove(void *dst, const void *src, size_t len);

//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

//size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

//int	ft_toupper(int c);

//int	ft_tolower(int c);

//char	*ft_strchr(const char *s, int c);

char *ft_strrchr(const char *s, int c);
#endif
