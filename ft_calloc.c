/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:55 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/25 14:29:02 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (size > sizeof(unsigned long int))
		return (NULL);
	array = malloc (count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero (array, (count * size));
	return (array);
}
