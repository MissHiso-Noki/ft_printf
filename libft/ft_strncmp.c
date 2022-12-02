/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:50:13 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 13:31:00 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

//int main () {
//   char str1[15];
//   char str2[15];
//   int ret;

//   strcpy(str1, "abcde");
//   strcpy(str2, "abcde");

//   ret = ft_strncmp(str1, str2, 4);

//   if(ret < 0) {
//      printf("str1 is less than str2");
//   } else if(ret > 0) {
//      printf("str2 is less than str1");
//   } else {
//      printf("str1 is equal to str2");
//   }

//   return(0);
//}
