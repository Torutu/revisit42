/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:01:47 by walnaimi          #+#    #+#             */
/*   Updated: 2023/10/26 17:21:03 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char  *ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	ch;

	str = (char *)s;
	ch = (char)c;
	i = 0;
	while (str[i] != ch)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return(&str[i]);
}


int main() {
    const char *testString = "Hello, World!";
    int characterToFind = 'o';

    char *result = ft_strchr(testString, characterToFind);

    if (result != NULL) 
	{
        printf("Character '%c' found at position: %ld\n", characterToFind, result - testString);
    } 
	else 
	{
        printf("Character '%c' not found in the string.\n", characterToFind);
    }

    return 0;
}
