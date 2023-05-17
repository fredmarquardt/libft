/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:13:14 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/25 11:47:54 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*s2;

	j = 0;
	i = ft_strlen(s1);
	s2 = malloc(i + 1);
	if (!s1 || !s2)
		return (0);
	while (j <= i)
	{
		s2[j] = s1[j];
		j++;
	}
	return (s2);
}
