/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:15:42 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 16:38:16 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcat - Appends the source string to the destination
 * string, ensuring that the total length does not exceed
 * the specified size.
 *
 * @dst: The destination buffer to which the string is appended.
 * @src: The source string to append.
 * @size: The size of the destination buffer.
 * 
 * Return: The total length of the string that would have
 * been created if there were enough space in the buffer,
 * which is the length of @dst plus the length of @src.
 * If @size is less than the length of @dst, the return
 * value will be @size + the length of @src.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	j = 0;
	while (dst[j])
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	i = 0;
	while (src[i] && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

/*
int main(void)
{
    char dest[20] = "Hello";
    char src[] = "World";
    size_t result;
    
    result = ft_strlcat(dest, src, 20);
    ft_putendl_fd(dest, 1);
    ft_putnbr_fd(result, 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/