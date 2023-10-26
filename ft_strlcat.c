/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:41:37 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/25 12:31:09 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t length;
	size_t i;

	length = 0;
	while(dst[length] != '\0' && length < dstsize)
		length++;
	i = length;
	while (src[length - i] != '\0' && length + 1 < dstsize)
	{
		dst[length] = src[length - i];
		length++;
	}
	if (i<dstsize)
		dst[length] = '\0';
	return (i + ft_strlen(src));
}

int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    size_t destsize = sizeof(dest);

    printf("Before strlcat: dest = \"%s\"\n", dest);

    size_t result = ft_strlcat(dest, src, destsize);

    printf("After strlcat: dest = \"%s\"\n", dest);
    printf("Total length after strlcat: %zu\n", result);

    return 0;
}
