/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:40:36 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/16 11:32:08 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*smodi;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	smodi = (char *)malloc(sizeof(*s) * (len + 1));
	if (!smodi)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] && start < ft_strlen((char *)s))
	{
		smodi[i] = s[start + i];
		i++;
	}
	smodi[i] = '\0';
	return (smodi);
}

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1ands2;
	int		length;
	int		i;
	int		j;

	if (s2 == NULL)
		return (NULL);
	length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s1ands2 = malloc(sizeof(char) * (length + 1));
	if (!s1ands2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s1ands2[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s1ands2[i + j] = s2[j];
		j++;
	}
	s1ands2[i + j] = '\0';
	return (s1ands2);
}

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = c;
		i++;
	}
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
