/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:49:38 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/25 10:48:21 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i <= dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (len >= dstsize)
		dst[i - 1] = '\0';
	else
		dst[i] = '\0';
	return (len);
}
