/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:50:15 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/24 13:27:24 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*malloc_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (start > ft_strlen(s))
	{
		dest = ft_calloc(sizeof(char), 1);
		if (!dest)
			return (NULL);
		return (dest);
	}
	if (len > (ft_strlen(s) - start))
	{
		dest = ft_calloc(sizeof(char), ((ft_strlen(s) - start) + 1));
		if (!dest)
			return (NULL);
		return (dest);
	}
	dest = ft_calloc((len + 1), sizeof(char));
	if (!dest)
		return (NULL);
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc_substr(s, start, len);
	if (!dest)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start + i] != '\0')
		{
			dest[i] = s[start + i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {

// 	printf("%s", ft_substr("Je suis Chloe", 4, 10));
// 	return (0);
// }
