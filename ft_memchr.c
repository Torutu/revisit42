/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:41:14 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/26 15:06:50 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stddef.h>

void* ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	str = (unsigned char *)s;
	i = 0;

	while (n > i)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}

//#include "libft.h" // Include your library/header file where ft_memchr is declared
/*
int main() {
    const char *str = "123456";
    int target = '1';

    // Call your custom ft_memchr function
    const void *result = ft_memchr(str, target, 13); // Search in the first 13 characters

    if (result != NULL) {
        printf("'%c' found at position: %ld\n", target, ((const char*)result - str));
    } else {
        printf("'%c' not found in the string.\n", target);
    }

    return 0;
}
*/
