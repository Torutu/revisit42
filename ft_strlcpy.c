/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:40:32 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/26 17:26:35 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r, p;

    r = strlcpy(buffer, string, size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
    
    printf("\n");
    
    p = ft_strlcpy(buffer, string, size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            p
          );
    
    printf("--------------------------\n");
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
