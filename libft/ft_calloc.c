/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:21:55 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 14:55:14 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*str;

	if (size != 0 && (size * nmemb) / size == !nmemb)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (!nmemb || !size)
	{
		return (str);
	}
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, nmemb * size);
	return (str);
}

// int main()
// {
// 	printf("%p\n", ft_calloc(5, 6));
// 	printf("%p\n", calloc(5, 6));
// 	return (0);
// }
