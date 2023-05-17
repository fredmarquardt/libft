/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:28:22 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/27 14:20:28 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = c;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == uc)
			return ((char *) str + i);
		i--;
	}
	return (0);
}
