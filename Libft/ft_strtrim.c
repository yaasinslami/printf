/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:14:02 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 17:02:15 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strtrim - Removes leading and trailing characters from
 * a string based on a specified set of characters.
 *
 * @s1: The string to trim.
 * @set: The set of characters to remove from the ends of @s1.
 * 
 * Return: A pointer to the newly allocated trimmed string,
 * or NULL if memory allocation fails. If @s1 is NULL,
 * an empty string is returned.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
	{
		return (ft_strdup(s1));
	}
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		++start;
	}
	while (s1[end] && ft_strrchr(set, s1[end]))
	{
		--end;
	}
	trimmed = ft_substr(s1, start, end - start + 1);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

/*
int main(void)
{
    char *result;
    
    result = ft_strtrim("   Hello World   ", " ");
    if (result)
    {
        ft_putendl_fd(result, 1);
        free(result);
    }
    return (0);
}
*/