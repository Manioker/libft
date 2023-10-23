/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:20:45 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:05:42 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	int a;
	char c;

	a = 1000000000;
	if (n == 0)
		putchar_fd('0', fd);
	while (!((n / a) > 0))
		a = a / 10;
	while (n != 0)
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		c = (n / a) + '0';
		putchar_fd(c, fd);
		n = n % a;
		a = a / 10;
	}
}

// int	main(void)
// {
// 	int fd;
// 	fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
// 	ft_putnbr_fd(59800552, fd);
// 	close(fd);
// }