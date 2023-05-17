/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:16:31 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/26 19:27:28 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_s;
	unsigned char	uc_c;

	i = 0;
	uc_s = (unsigned char *)s;
	uc_c = (unsigned char)c;
	while (i < n)
	{
		if (uc_s[i] == uc_c)
			return (&uc_s[i]);
		i++;
	}
	return (0);
}
