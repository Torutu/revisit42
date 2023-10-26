/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:46:55 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/26 11:43:41 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char*)s +i);
	}
	if (s[i] == c)
		return((char*)s +i);
	return (0);
}

int main() {
    const char *str = "Hello, World!";
    int target = 'o';

    // Call your custom strrchr function
    char *result = strrchr(str, target);

    if (result != NULL) {
        printf("Last '%c' found at position: %ld\n", target, (result - str));
    } else {
        printf("'%c' not found in the string.\n", target);
    }

    return 0;
}
