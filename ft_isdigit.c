/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:38:34 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/23 15:45:25 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
int main()
{
	printf("digit: %d\nnon digit: %d\n", isdigit('5'), isdigit('W'));
	printf("\n");
	printf("digit: %d\nnon digit: %d\n", ft_isdigit('5'), ft_isdigit('W'));
	
	return 0;
}*/
