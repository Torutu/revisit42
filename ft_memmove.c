/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:22:27 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/25 11:50:40 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (((unsigned char *)src) >= ((unsigned char *)dst))
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}

int	main(){
	char source[] = "Hello World!";
	char destination[13];

	printf("Original source: %s\n %p\n", source, source);

	ft_memmove(destination, source, 5);
	printf("After coping 5 characters: %s\n %p\n", destination, destination);

	memmove(destination, source, 12);
	printf("After copying the rest with memmove: %s\n %p\n", destination, destination);

	return 0;

}
