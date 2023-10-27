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
#include <limits.h>

static long	ft_count(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while ((n > 0) || (n < 0))
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*a;
	int			i;
	long int	c;

	i = ft_count(n);
	c = n;
	a = (char *)malloc((i + 1) * sizeof(char));
	if (n == 0)
		a[0] = '0';
	if (a == NULL)
		return (NULL);
	if (c < 0)
	{
		a[0] = '-';
		c = -c;
		n = -n;
	}
	a[i] = '\0';
	while (c > 0)
	{
		a[--i] = (c % 10) + '0';
		c = c / 10;
	}
	return (a);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// }