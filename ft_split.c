/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:04:14 by fmarquar          #+#    #+#             */
/*   Updated: 2022/11/26 16:21:21 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_words(char const *s, char c)
{
	unsigned int	words;
	int				i;
	int				bool;

	bool = 0;
	words = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && bool == 0)
		{
			bool = 1;
			words++;
		}
		else if (s[i] == c)
			bool = 0;
		i++;
	}
	return (words);
}

static char	*new_str(char const *s, char c)
{
	char	*str;
	int		wlen;

	wlen = 0;
	while (s[wlen] && (s[wlen] != c))
		wlen++;
	str = ft_calloc(wlen + 1, sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s, wlen + 1);
	return (str);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		nb_words;
	int		i;

	i = -1;
	nb_words = get_nb_words(s, c);
	array = ft_calloc(nb_words + 1, sizeof(char *));
	if (!array)
		return (0);
	while (++i < nb_words)
	{
		while (*s == c)
			s++;
		array[i] = new_str(s, c);
		if (!array[i])
			return (ft_free(array));
		s += ft_strlen(array[i]);
	}
	array[i] = NULL;
	return (array);
}
