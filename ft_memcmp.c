/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:07:00 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/26 16:25:55 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const	unsigned char	*str1;
	const	unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;

	while (n > i++)
	{
		if (str1[i] != str2[i] && str1[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
/*
int main() {
    const char *str1 = "Hello, Worlb!";
    const char *str2 = "Hello, World!";
    size_t n = 13; // Number of characters to compare

    // Call your custom ft_memcmp function
    int result = ft_memcmp(str1, str2, n);

    if (result == 0) {
        printf("The memory blocks are equal.\n");
    } else if (result < 0) {
        printf("Memory block 1 is less than memory block 2.\n");
    } else {
        printf("Memory block 1 is greater than memory block 2.\n");
    }

    return 0;
}*/
