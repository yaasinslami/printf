/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:06:20 by yslami            #+#    #+#             */
/*   Updated: 2024/10/27 14:27:12 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strdup - Duplicates a string by allocating sufficient
 * memory for a new copy of the input string.
 *
 * @s: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicate string,
 * or NULL if memory allocation fails.
*/

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	str = (char *)malloc((s_len + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (i < s_len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main(void)
{
    char *str = "Hello";
    char *dup;

    dup = ft_strdup(str);
    if (dup)
    {
        ft_putendl_fd(dup, 1);
        free(dup);
    }
    return (0);
}
*/
