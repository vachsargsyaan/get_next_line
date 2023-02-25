/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:34:49 by vacsargs          #+#    #+#             */
/*   Updated: 2023/02/24 21:10:30 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str && str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		++i;
	}
	while (s2 && s2[j])
		str[i++] = s2[j++];
	str[i] = 0;
	if (s1)
		free(s1);
	return (str);
}
