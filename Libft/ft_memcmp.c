/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:53:25 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 13:28:41 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

//int main () {
//   char str1[15];
//   char str2[15];
//   int ret;

//   memcpy(str1, "abcdef", 6);
//   memcpy(str2, "ABCDEF", 6);

//   ret = ft_memcmp(str1, str2, 5);

//   if(ret > 0) {
//      printf("str2 is less than str1");
//   } else if(ret < 0) {
//      printf("str1 is less than str2");
//   } else {
//      printf("str1 is equal to str2");
//   }

//   return(0);
//}
