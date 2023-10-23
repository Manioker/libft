/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:17:12 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:00:44 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ptr1;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr != c)
			ptr++;
		else
		{
			ptr1 = ptr;
			ptr++;
		}
	}
	if (c == '\0')
		ptr1 = ptr;
	return (ptr1);
}

// int main()
// {
// 	printf("%s", strrchr("coucou ma caru manu ;)\n", '\0'));
// }