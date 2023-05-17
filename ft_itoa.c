/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:27:37 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/27 14:18:17 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int		len;
	long	n2;

	n2 = n;
	len = 0;
	if (n2 == 0)
		return (1);
	if (n2 < 0)
	{
		len++;
		n2 = n2 * (-1);
	}
	while (n2 > 0)
	{
		n2 = n2 / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	numb;

	len = get_length(n);
	numb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	if (numb < 0)
	{
		str[0] = '-';
		numb = numb * (-1);
	}
	if (numb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (numb)
	{
		str[len] = numb % 10 + '0';
		len--;
		numb = numb / 10;
	}
	return (str);
}
