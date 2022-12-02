/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:50:10 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/22 13:31:41 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkstart(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
		{
			break ;
		}
		i++;
	}
	return (i);
}

static int	checkend(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strrchr(set, s1[len - i - 1]) == 0)
		{
			break ;
		}
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*sfinal;

	start = checkstart(s1, set);
	end = checkend(s1, set);
	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	if ((end - start) < 0)
	{
		sfinal = ft_calloc(sizeof(char), 1);
		if (!sfinal)
			return (NULL);
		return (sfinal);
	}
	sfinal = malloc((end - start + 1) * sizeof(char));
	if (sfinal == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(sfinal, s1 + start, end - start + 1);
	return (sfinal);
}

//int main(void)
//{
//	printf("%s\n", ft_strtrim("pppchloepcosteppp", "p"));
//	return (0);
//}
