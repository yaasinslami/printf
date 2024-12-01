/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:36:17 by yslami            #+#    #+#             */
/*   Updated: 2024/10/28 06:02:26 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_substr - Extracts a substring from a string starting at
 * a specified index.
 *
 * @s: The string to extract from.
 * @start: The starting index from which to extract the substring.
 * @len: The maximum length of the substring to extract.
 *
 * Return: A pointer to the newly allocated substring,
 * or NULL if memory allocation fails. If @start is greater
 * than the length of @s, an empty string is returned.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
	{
		len = size;
	}
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/*
int main(void)
{
    char *str = "Hello World";
    char *sub;

    sub = ft_substr(str, 6, 5);
    if (sub)
    {
        ft_putendl_fd(sub, 1);
        free(sub);
    }
    return (0);
}
*/
