/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:41:45 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/23 17:52:52 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main() {
    
    printf("ascii: %d\nnon asci: %d\n", isascii(5), isascii(245));
    printf("--------------------------------\n");
    printf("ascii: %d\nnon asci: %d\n", ft_isascii(5), ft_isascii(245));

    return 0;
}
