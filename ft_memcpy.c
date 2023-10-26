/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:40:25 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/24 11:49:14 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dest);
}


int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    char dest[50];
    
    printf("\nBefore memcpy(): %s\n", str); 

    ft_memcpy(dest, str, 8*sizeof(char)); 
    printf("After ft_ memcpy():  %s\n", str); 

    memcpy(dest, str, 8*sizeof(char)); 
    printf("After  memcpy():  %s", str); 

    return 0; 
}
//memcpy used to copy a block of memory from source location to destination location
//memcpy function operates on raw memory, so it does not interpret or modify the data being copied in an way
