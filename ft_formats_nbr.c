/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:31:53 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/05 15:57:38 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

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

char	*ft_uitoa(unsigned int nbr)
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

int	ft_print_usgn(unsigned int nbr)
{
	int		len;
	char	*num;

	len = 0;
	if (nbr == 0)
		len += ft_print_char('0');
	else
	{
		num = ft_uitoa(nbr);
		len += ft_print_str(num);
		free(num);
	}
	return (len);
}

int	ft_print_nbr(int nbr)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(nbr);
	len = ft_print_str(num);
	free(num);
	return (len);
}
