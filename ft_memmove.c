/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:58:55 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/27 14:18:37 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*p_src;
	unsigned char		*p_dst;

	p_src = src;
	p_dst = dst;
	if (p_src == NULL && p_dst == NULL)
		return (NULL);
	if (p_src < p_dst)
	{
		while (len--)
		{
			p_dst[len] = p_src[len];
		}
	}
	else
	{
		while (len--)
		{
			*p_dst++ = *p_src++;
		}
	}
	return (dst);
}
