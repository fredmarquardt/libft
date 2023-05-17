/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:36:16 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/27 14:20:19 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	ucs1;
	unsigned char	ucs2;

	i = 0;
	while (i < n)
	{
		ucs1 = s1[i];
		ucs2 = s2[i];
		if (!s1[i] && !s2[i])
			return (0);
		if (ucs1 > ucs2)
			return (1);
		if (ucs1 < ucs2)
			return (-1);
		i++;
	}
	return (0);
}
/*
int main () {
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "ABCDEFGHIJ");
	strcpy(str2, "ABCDEFG");

	ret = ft_strncmp(str1, str2, 9);

	if(ret < 0) {
		printf("str1 is less than str2");
	} else if(ret > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	return(0);
}
*/
