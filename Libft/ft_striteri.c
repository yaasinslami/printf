/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:27:31 by yslami            #+#    #+#             */
/*   Updated: 2024/10/27 14:12:08 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_striteri - Applies a function to each character of a
 * string, passing the index and the character by reference.
 *
 * @s: The string to iterate over.
 * @f: The function to apply to each character, which takes
 *     an index and a pointer to the character.
 *
 * Return: This function does not return a value.
 *
 * Note: If @s is NULL, the function will not apply @f.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void f2(unsigned int i, char *c)
{
    *c = *c + i;
}

int main(void)
{
    char str[] = "Hello";

    ft_striteri(str, f2);
    ft_putendl_fd(str, 1);
    return (0);
}
*/
