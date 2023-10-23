/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:56:20 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:03:41 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*dest;
	size_t	i;
	size_t	a;

	i = 0;
	a = n * size;
	dest = (char *)malloc(a);
	if (dest != malloc(a))
		return (0);
	while (a > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
