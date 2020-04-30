/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:33:51 by sookim            #+#    #+#             */
/*   Updated: 2020/04/30 15:35:30 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int		ft_wordcount(char const *s, char c)
{
	int		i;
	int		count;

	if (!ft_strlen(s))
		return (1);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i - 1] != c)
				count++;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count + 1);
}

static char		*ft_strndup(char const *s, int n)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!(ptr = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char			**ft_split(char const *s, char c)
{
	int			word_i;
	char		**words;
	char		*ptr;

	if (!s || !(words = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c)))))
		return (NULL);
	while (*s && *s == c)
		s++;
	word_i = 0;
	ptr = (char*)s;
	while (*s)
	{
		if (*s == c)
		{
			words[word_i++] = ft_strndup(ptr, s - ptr);
			while (*s == c)
				s++;
			ptr = (char*)s--;
		}
		s++;
	}
	if (ptr != s)
		words[word_i++] = ft_strndup(ptr, s - ptr);
	words[word_i] = NULL;
	return (words);
}
