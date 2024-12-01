/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:38:47 by yslami            #+#    #+#             */
/*   Updated: 2024/10/28 07:00:46 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcpy - copy memory area
 *
 * @dest: destination memory
 * @src: memory to be copied
 * @n: number of bytes to be copied from @src to @dst
 *
 * Description: copies n bytes from memory area src to memory area dst.
 * 		If dstt and src overlap, behavior is undefined.
 *
 * Return: returns the original value of dst
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int	main()
{
	char	src[] = "ABCDEF";
	// overlap case
	//memcpy(src + 2, src, 3);
	//ft_putendl_fd(memcpy(src + 2, src, 3), 1);
	ft_putendl_fd(memcpy(src, src + 2, 3), 1);
	return (0);
}
*/
