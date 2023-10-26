/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:25:43 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/23 17:43:56 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A'&& c <= 'Z') || (c >= 'a' && c <= 'z') 
			|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("W:%d\n5:%d\n+:%d\n", ft_isalnum('W'), ft_isalnum('5'), ft_isalnum('+'));
	printf("\n");
	printf("W:%d\n5:%d\n+:%d\n", isalnum('W'), isalnum('5'), isalnum('+'));
}*/
