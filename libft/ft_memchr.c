/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:11:58 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/23 11:42:07 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

//int main () {
//   const char str[] = "http://www.tutorialspoint.com";
//   const char ch = '.';
//   char *ret;

//   ret = ft_memchr(str, ch, strlen(str));

//   printf("String after |%c| is - |%s|\n", ch, ret);

//   return(0);
//}
