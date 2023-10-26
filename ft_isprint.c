/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:53:47 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/23 18:26:22 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int main(){

	printf("printable: %d\nnon printable: %d\n", isprint(38), isprint(5));
	printf("\n");
	printf("printable: %d\nnon printable: %d\n", ft_isprint(38), ft_isprint(5));

	return 0;
}
