/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:10:50 by yslami            #+#    #+#             */
/*   Updated: 2024/10/26 15:31:06 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memmove - copy byte string
 *
 * @dest: destination memory
 * @src: memory to be copied
 * @n: number of bytes to be copied from @src to @dst
 *
 * Description: ft_memmove() function copies len bytes from string src to dst.
 * 				The two strings may overlap; the copy is always done safely.
 *
 * Return: ft_memmove() function returns the original value of dst.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (n > len)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dest);
}

/*
int	main()
{
	char	src[] = "ABCDEF";
	// overlap case
	ft_putendl_fd(memmove(src + 2, src, 3), 1);
	//ft_putendl_fd(memmove(src, src + 2, 3), 1);
	return (0);
}
*/
