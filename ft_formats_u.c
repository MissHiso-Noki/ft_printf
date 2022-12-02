/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:52:32 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/02 10:54:46 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	uitoa_lenght(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		len = 1;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*uitoa(unsigned int nbr)
{
	int		len;
	char	*str;

	len = uitoa_lenght(nbr);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}

int	ft_formats_u(unsigned int nbr)
{
	int		len;
	char	*num;

	len = 0;
	if (nbr == 0)
	{
		len = len + ft_formats_c('0');
	}
	else
	{
		num = uitoa(nbr);
		len = len + ft_formats_s(num);
		free(num);
	}
	return (len);
}
