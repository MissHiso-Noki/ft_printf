/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:28:46 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/02 11:26:12 by ccoste           ###   ########.fr       */
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
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (!str[i + 1])
				return (-1);
			i++;
			len = len + ft_formats(args, str[i]);
		}
		else
			len = len + ft_formats_c(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int main()
// {
// 	int	str;

// 	str = 10;
// 	printf("%d\n", printf("%x%% hello %s you %d\n%", str, "thank", 2));
// 	ft_printf("%d\n", ft_printf("%X%% hello %s you %d\n%", str, "thank", 2));
// 	return (0);
// }
