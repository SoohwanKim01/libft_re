/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:54:23 by sookim            #+#    #+#             */
/*   Updated: 2020/04/30 14:57:46 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_s;
	size_t		i;

	if (s == NULL)
		return (NULL);
	new_s = (char *)malloc(sizeof(char) * len + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		new_s[i] = s[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}
