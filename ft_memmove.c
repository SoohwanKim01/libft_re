/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookim <sookim@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:51:34 by sookim            #+#    #+#             */
/*   Updated: 2020/04/30 14:01:29 by sookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i)
		{
			i--;
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		}
	}
	return (dest);
}
