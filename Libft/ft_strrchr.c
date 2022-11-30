/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:56:32 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 13:31:28 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

//int main () {
//   const char str[] = "http://www.tutorialspoint.com";
//   const char ch = '.';
//   char *ret;

//   ret = ft_strrchr(str, ch);

//   printf("String after |%c| is - |%s|\n", ch, ret);

//   return(0);
//}
