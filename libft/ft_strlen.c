/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:42:36 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 13:31:08 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)

{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

//int main () {
//   char str[50];
//   int len;

//   strcpy(str, "This is tutorialspoint.com");

//   len = strlen(str);
//   printf("Length of |%s| is |%d|\n", str, len);

//   return(0);
//}
