/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:52:25 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/02 11:08:45 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	clen(unsigned long long c)
{
	int	len;

	len = 0;
	while (c != 0)
	{
		len++;
		c = c / 16;
	}
	return (len);
}

void	putnbr_fd(unsigned long long c, int fd)
{
	if (c >= 16)
	{
		putnbr_fd(c / 16, 1);
		putnbr_fd(c % 16, 1);
	}
	else
	{
		if (c >= 10)
		{
			ft_putchar_fd(('a' + (c - 10)), fd);
		}
		else if (c < 10)
		{
			ft_putchar_fd(('0' + c), fd);
		}
	}
}

int	ft_formats_p(unsigned long long c)
{
	int	len;

	len = 0;
	if (!c)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		len = len + ft_formats_s("0x");
		putnbr_fd(c, 1);
		len = len + clen(c);
	}
	return (len);
}
