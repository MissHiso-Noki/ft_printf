/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:59:34 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/30 18:00:10 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char str)
{
	int	len;

	len = 0;
	if (str == 'x' || str == 'X')
		len = len + ft_formats_xX(va_arg(args, unsigned int), str);
	else if (str == 'd' || str == 'i')
		len = len + ft_formats_di(va_arg(args, int));
	else if (str == 'c')
		len = len + ft_formats_c(va_arg(args, int));
	else if (str == 's')
		len = len + ft_formats_s(va_arg(args, char *));
	else if (str == 'p')
		len = len + ft_formats_p(va_arg(args, unsigned long long));
	else if (str == 'u')
		len = len + ft_formats_u(va_arg(args, unsigned int));
	else if (str == '%')
	{
		write(1, "%", 1);
		len = len + 1;
	}
	return (len);
}
