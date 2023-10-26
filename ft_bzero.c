/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:28:07 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/24 11:34:45 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*(p++) = 0;
		n--;
	}
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks."; 

    printf("\nBefore bzero(): %s\n", str);

    ft_bzero(str + 13, 8*sizeof(char)); 
    printf("After ft_ bzero():  %s\n", str); 
//null the rest of the string starting from str[13]
    bzero(str + 13, 8*sizeof(char));
    printf("After  bzero():  %s", str); 
    return 0; 
}

