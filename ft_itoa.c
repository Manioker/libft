/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:29:43 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:59 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *a, char *b)
{
	int		i;
	char	c;

	i = 0;
	while (a[i] != '\0')
		i++;
	b[i] = '\0';
	i--;
	if (*a == '-')
	{
		c = '-';
		a++;
	}
	while (*a != '\0')
	{
		b[i] = *a;
		a++;
		i--;
	}
	if (c == '-')
		b[i] = '-';
	return (b);
}

char	*ft_itoa(int n)
{
	char		*a;
	int			i;
	char		*b;
	long int	c;

	a = (char *)malloc(13);
	i = 0;
	c = n;
	if (c < 0)
	{
		a[i] = '-';
		i++;
		c = -c;
	}
	while (c > 0)
	{
		a[i] = (c % 10) + '0';
		c = c / 10;
		i++;
	}
	a[i] = '\0';
	b = (char *)malloc(i);
	if (b == NULL)
		return (NULL);
	return (ft_reverse(a, b));
}

// int main()
// {
// 	printf("%s\n", ft_itoa(-55));
// }