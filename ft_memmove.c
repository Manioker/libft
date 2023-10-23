/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:10:22 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:40 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr1;
	int		i;

	i = 0;
	ptr = (char *)dest;
	ptr1 = (char *)src;
	if (!(dest || src || n == 0))
		return (ptr);
	while (n > 0)
	{
		ptr[i] = ptr1[i];
		i++;
		n--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[5] = "he55o";
// 	char dest[5] = "";
// 	printf("%s\n", src);
// 	ft_memmove(dest, src, 5);
// 	printf("%s\n", dest);
// }