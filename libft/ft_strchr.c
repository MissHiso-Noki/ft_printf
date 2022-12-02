/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:46:59 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 13:29:49 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

//int main () {
//   const char str[] = "http://www.tutorialspoint.com";
//   const char ch = '.';
//   char *ret;

//   ret = ft_strchr(str, ch);

//   printf("String after |%c| is - |%s|\n", ch, ret);

//   return(0);
//}
