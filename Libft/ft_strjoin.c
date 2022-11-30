/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:49:46 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/15 15:19:05 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sizes1;
	int		sizes2;
	char	*dest;
	int		i;
	int		j;

	sizes1 = ft_strlen(s1);
	sizes2 = ft_strlen(s2);
	i = 0;
	j = 0;
	dest = malloc((sizes1 + sizes2 + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[sizes1 + j] = s2[j];
		j++;
	}
	dest[sizes1 + j] = '\0';
	return (dest);
}

// int main()
// {
// 	printf("%s\n", ft_strjoin("Coucou ", "toi"));
// 	return (0);
// }
