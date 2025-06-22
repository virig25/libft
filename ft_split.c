/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:50 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:50 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	if (c == '\0')
		return (1);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		count++;
		while(s[i] && s[i] != c)
			i++;
		while(s[i] == c)
			i++;
	}
	return (count);
}
char	**free_str(char **str, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c){

	char	**ret;
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	ret = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ret)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			break;
		while (s[i] && s[i] != c)
			i++;
		ret[index++] = ft_substr(s, 0, i);
		if (!ret[index - 1])
			return (free_str(ret, index - 1));
		s += i;
		i = 0;
	}
	ret[index] = NULL;
	return(ret);
}

