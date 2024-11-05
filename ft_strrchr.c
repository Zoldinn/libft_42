/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:45:43 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/05 15:12:13 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s[len] != c)
		len--;
	if (!s)
		return (NULL);
	return ((char *) s + len);
}

// test

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strrchr(av[1], (int) av[2][0]));
		return (0);
	}
	printf("Error");
	return (1);
}