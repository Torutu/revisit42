/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:12:01 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/24 16:01:14 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int    main()
{
    printf("big %d\nsmall:%d\nnon letter: %d\n", isalpha('G'), isalpha('g'), isalpha('5'));
    printf("\n");
    printf("big %d\nsmall:%d\nnon letter: %d\n", ft_isalpha('G'), ft_isalpha('g'), ft_isalpha('5'));

    return 0;
}
