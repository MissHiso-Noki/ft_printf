/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:52:22 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/01 16:49:05 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_formats_di(int nbr)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(nbr);
	len = ft_formats_s(num);
	free(num);
	return (len);
}
