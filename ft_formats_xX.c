/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats_xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:52:35 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/02 10:48:43 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexlen(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len++;
		nbr = nbr / 16;
	}
	return (len);
}

void	puthex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		puthex(nbr / 16, format);
		puthex(nbr % 16, format);
	}
	else
	{
		if (nbr < 10)
			ft_putchar_fd((nbr + '0'), 1);
		else if (format == 'x')
			ft_putchar_fd((nbr - 10 + 'a'), 1);
		else if (format == 'X')
			ft_putchar_fd((nbr - 10 + 'A'), 1);
	}
}

int	ft_formats_xX(unsigned int nbr, const char format)
{
	int	print_len;

	print_len = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	puthex(nbr, format);
	print_len = print_len + hexlen(nbr);
	return (print_len);
}
