/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:07:32 by yslami            #+#    #+#             */
/*   Updated: 2024/10/28 14:59:11 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strchr - Locates the first occurrence of a character
 * in a string.
 *
 * @s: The string to search in.
 * @c: The character to locate (ASCII representation).
 *
 * Return: A pointer to the first occurrence of @c in @s,
 * or NULL if @c is not found. If @c is '\0', it returns
 * a pointer to the null terminator of the string.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	c = (unsigned char)c;
	while (*ptr)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}
	if (c == 0)
		return (ptr);
	return (NULL);
}

/*
int main()
{
	char s[] = "1337";
	int c = '\0';

	ft_putendl_fd(ft_strchr(s, c), 1);
	return (0);
}
*/
