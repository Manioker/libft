/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:03:41 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:14 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char const *s, int b)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((b + 1) * sizeof(char));
	while (b > 0)
	{
		str[i] = *s;
		s++;
		i++;
		b--;
	}
	str[i] = '\0';
	i = 0;
	return (str);
}

static char	**ft_cpy(char **a, char const *s, char c)
{
	int	b;
	int	index;

	b = 0;
	index = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			index++;
			s++;
		}
		while (s[b] != c && s[b] != '\0')
			b++;
		a[index] = ft_copy(s, b);
		s = (s + b);
		b = 0;
		if (a[index] == NULL)
		{
			while (--index >= 0)
				free(a[index]);
			return (NULL);
		}
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		count;
	int		i;

	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	a = (char **)malloc((count) * sizeof(char *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	a = ft_cpy(a, s, c);
	return (a);
}

// int	main(void)
// {
// 	char **result = ft_split("pdesole", 'p');

// 	if (result != NULL)
// 	{
// 		for (int i = 0; result[i] != NULL; i++)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]); // Free each string
// 		}
// 		free(result); // Free the array of strings
// 	}

// 	return (0);
// }