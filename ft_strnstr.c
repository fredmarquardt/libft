/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:39:05 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/24 15:12:55 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*ninhay;

	i = 0;
	ninhay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || needle == haystack)
		return (ninhay);
	while (ninhay[i] != '\0' && i <= len)
	{
		j = 0;
		while (needle[j] == ninhay[i + j] && ninhay[i + j] != '\0'
			&& needle[j] != '\0' && i + j < len)
		{
			j++;
			if (j == n_len)
				return (ninhay + i);
		}
		i++;
	}
	return (0);
}
