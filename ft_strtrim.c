/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:11:31 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:07:07 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*new;
	int		a;
	int		b;

	i = 0;
	a = 0;
	b = 0;
	new = (char *)malloc((str_len(s1) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		while (set[a] != s1[i] && set[a] != '\0')
			a++;
		if (set[a] == '\0')
		{
			new[b] = s1[i];
			b++;
		}
		a = 0;
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char s1[7] = "h ello";
// 	char s2[7] = " world";
// 	printf("%s\n", ft_strtrim(s1, s2));
// }