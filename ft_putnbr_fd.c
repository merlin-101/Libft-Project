/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:43:25 by rnarciso          #+#    #+#             */
/*   Updated: 2022/12/02 04:53:39 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648 && (fd > 0))
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0 && (fd > 0))
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 0 && n < 10 && (fd > 0))
	{
		ft_putchar_fd(n + '0', fd);
	}
	else if (n > 9 && (fd > 0))
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
