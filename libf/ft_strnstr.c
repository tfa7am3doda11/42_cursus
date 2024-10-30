/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-ais <rben-ais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:13:16 by rben-ais          #+#    #+#             */
/*   Updated: 2024/10/26 18:07:46 by rben-ais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char	*needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	if (ft_strlen(needle) > len)
		return (NULL);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[j + i] && needle[j]
			&& i + j < len && needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
