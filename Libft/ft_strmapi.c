/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:37:21 by yslami            #+#    #+#             */
/*   Updated: 2024/10/31 21:11:09 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strmapi - Applies a function to each character of a
 * string, producing a new string with the results.
 *
 * @s: The input string to process.
 * @f: The function to apply to each character of @s.
 *
 * Return: A pointer to the newly allocated string with
 * the results, or NULL if memory allocation fails. If @s
 * is NULL, an empty string is returned.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (ft_strdup(""));
	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
char f(unsigned int i, char c)
{
    return (c + i);
}

int main(void)
{
    char *result;

    result = ft_strmapi("Hello", f);
    if (result)
    {
        ft_putendl_fd(result, 1);
        free(result);
    }
    return (0);
}
*/
