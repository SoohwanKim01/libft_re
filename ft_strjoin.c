/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:58:07 by sookim            #+#    #+#             */
/*   Updated: 2020/04/30 19:53:00 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	idx;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(ptr = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	idx = -1;
	while (s1[++idx] && idx < s1_len)
		ptr[idx] = s1[idx];
	while (s2[idx - s1_len] && idx - s1_len < s2_len)
	{
		ptr[idx] = s2[idx - ft_strlen(s1)];
		idx++;
	}
	ptr[idx] = '\0';
	return (ptr);
}
