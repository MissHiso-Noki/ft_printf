/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:57:43 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/05 16:09:28 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_formats(va_list args, const char formats)
{
	int	len;

	len = 0;
	if (formats == 'c')
		len = len + ft_print_char(va_arg(args, int));
	else if (formats == 's')
		len = len + ft_print_str(va_arg(args, char *));
	else if (formats == 'p')
		len = len + ft_print_ptr(va_arg(args, unsigned long long));
	else if (formats == 'd' || formats == 'i')
		len = len + ft_print_nbr(va_arg(args, int));
	else if (formats == 'u')
		len = len + ft_print_usgn(va_arg(args, unsigned int));
	else if (formats == 'x' || formats == 'X')
		len = len + ft_print_hex(va_arg(args, unsigned int), formats);
	else if (formats == '%')
	{
		write(1, "%", 1);
		len = len + 1;
	}
	return (len);
}
