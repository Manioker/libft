/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:14:39 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:06:45 by andi             ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;

	substring = (char *)malloc(len + 1);
	i = 0;
	if (strlen(s) < start)
	{
		return (NULL);
	}
	while ((len) > 0 && s[start] != '\0')
	{
		substring[i] = s[start];
		i++;
		start++;
		len--;
	}
	substring[i] = '\0';
	return (substring);
}

// int	main(void)
// {
// 	char s[6] = "hello";
// 	printf("%s\n", ft_substr(s, 1, 1));
// }