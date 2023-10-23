/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:51:50 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:00:48 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (*s1 != '\0' && n > 0)
	{
		while (*s1 == s2[i] && n > 0)
		{
			i++;
			s1++;
			n--;
			if (s2[i] == '\0')
				return ((char *)s1 - i);
		}
		s1++;
		n--;
		i = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strnstr("coucou ma caru ;)\n", "coucou", 17));
// }