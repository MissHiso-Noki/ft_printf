/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:48:47 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/05 15:57:43 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hexlen(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

void	ft_puthex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, format);
		ft_puthex(nbr % 16, format);
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

int	ft_print_hex(unsigned int nbr, const char format)
{
	int	print_len;

	print_len = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	ft_puthex(nbr, format);
	print_len += ft_hexlen(nbr);
	return (print_len);
}
