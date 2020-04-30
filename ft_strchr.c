/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:17:25 by sookim            #+#    #+#             */
/*   Updated: 2020/04/30 14:19:25 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	char	*s1;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	c1 = (char)c;
	s1 = (char *)s;
	while (s1[i] && s1[i] != c1)
		i++;
	if (s1[i] == c1)
		return (&s1[i]);
	return (NULL);
}
