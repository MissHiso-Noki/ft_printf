/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:28:46 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/29 14:59:45 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
	{
		return (-1);
	}
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (!str[i + 1])
			{
				return (-1);
			}
			len = len + ft_formats(args, str[i + 1]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
