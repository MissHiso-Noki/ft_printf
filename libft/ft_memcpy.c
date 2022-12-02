/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:21:01 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 13:28:56 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest)
	{
		return (NULL);
	}
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

//int main () {
//   const char src[50] = "http://www.tutorialspoint.com";
//   char dest[50];
//   strcpy(dest,"Heloooo!!");
//   printf("Before memcpy dest = %s\n", dest);
//   ft_memcpy(dest, src, strlen(src)+1);
//   printf("After memcpy dest = %s\n", dest);

//   return(0);
//}
