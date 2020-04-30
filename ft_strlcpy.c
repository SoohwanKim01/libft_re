/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:10:21 by sookim            #+#    #+#             */
/*   Updated: 2020/04/30 19:50:09 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (!dst)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && size > i + 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
