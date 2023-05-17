/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:06:03 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/27 14:20:38 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	if ((ft_strlen(s) - j) < len)
		len = (ft_strlen(s) - j);
	if (ft_strlen(s) < start)
		len = 0;
	sub_s = (char *)malloc(len + 1);
	if (!s || !sub_s)
		return (0);
	while (j < ft_strlen(s) && i < len)
	{
		sub_s[i] = s[j];
		j++;
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
