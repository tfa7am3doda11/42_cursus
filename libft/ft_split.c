/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-ais <rben-ais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:13:09 by rben-ais          #+#    #+#             */
/*   Updated: 2024/11/04 21:50:26 by rben-ais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			i++;
		}
	}
	return (count);
}

static size_t	word_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**free_array(char **array, size_t size)
{
	size_t	i;

	i = 0;
	while ( i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (s[j] == c)
			j++;
		size_t len = word_length(&s[j], c);
		result[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!result[i])
			return (free_array(result, i));
		ft_strlcpy(result[i], &s[j], len + 1);
		j += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

#include <stdio.h>

int main(void)
{
	char const *str = "reda nadi bzf ";
	char delimiter = ' ';
	char **result;
	size_t i;

	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Error: Memory allocation failed.\n");
		return (1);
	}
	while(result[i])
	{
		printf("Result[%zu]: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}