/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:25:00 by yslami            #+#    #+#             */
/*   Updated: 2024/10/31 21:09:30 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcpy - Copies up to size - 1 characters from the
 * source string to the destination string, null-terminating
 * the result.
 *
 * @dst: The destination buffer to copy the string into.
 * @src: The source string to copy from.
 * @size: The size of the destination buffer.
 *
 * Return: The total length of the source string. If the
 * length is greater than or equal to size, the destination
 * string will not be null-terminated.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
int main(void)
{
    char dest[20];
    char src[] = "HELLO WORLD";
	//char *src = NULL;
    size_t result;

    result = ft_strlcpy(dest, src + 2, 4);
    ft_putendl_fd(dest, 1);
    ft_putnbr_fd(result, 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/
