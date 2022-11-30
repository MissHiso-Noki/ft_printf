/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:48:32 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/21 15:30:33 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_getstr(size_t size)
{
	char	*dest;

	dest = ft_calloc((size + 1), sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	return (dest);
}

static int	itoa_length(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
	}
	if (n == 0)
	{
		len = 1;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = itoa_length(n);
	str = ft_getstr(len);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[(len--) - 1] = '8';
			n = n / 10;
		}
		n = n * -1;
	}
	while (n != 0 && len >= 0)
	{
		str[(len--) - 1] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

// int main()
// {
// 	int	nbr;

// 	nbr = 0;
// 	printf("%s\n", ft_itoa(nbr));
// 	return (0);
// }
