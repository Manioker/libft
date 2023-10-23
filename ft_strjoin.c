/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:40:15 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:06:15 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	size_t		i;
	int			a;
	const char	*ptr;

	i = strlen(s1) + strlen(s2);
	new = (char *)malloc(i + 1);
	a = 0;
	ptr = s1;
	if (new == NULL)
		return (NULL);
	while (i > 1)
	{
		while (*ptr != '\0')
		{
			new[a] = *ptr;
			ptr++;
			a++;
			i--;
		}
		ptr = s2;
	}
	new[a] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char s1[6] = "hello";
// 	char s2[7] = " world";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }