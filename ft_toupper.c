/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:22:33 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/25 10:20:53 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return(c - 32);
	else
		return(c);
}

int	main()
{
	printf("small: %d\n big: %d\n",toupper('w'), toupper('W'));

	printf("\n");

	printf("small: %d\n big: %d\n",ft_toupper('w'), ft_soupper('W'));
}
