/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:33:27 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/05 16:01:04 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

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
			len = len + ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len = len + ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int main()
// {
// 	printf("%d\n", printf("test"));
// 	ft_printf("%d\n", ft_printf("test"));
// 	return (0);
// }
