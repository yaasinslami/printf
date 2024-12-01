/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:42:39 by yslami            #+#    #+#             */
/*   Updated: 2024/10/28 06:33:02 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
/**
 * ft_calloc - memory allocation
 *
 * @nmemb: number of cases to allocate
 * @size: size of each element
 *
 * Description: ft_calloc function allocate memory
 * 				The allocated memory is filled with bytes of value zero.
 *
 * Return: returns a pointer to allocated memory If successful
 * 			otherwise return (NULL)
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && (nmemb != (nmemb * size) / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int main()
{
	size_t	nmemb = 18446744073709551615UL / 2 + 1;
	size_t	size = 1;
	void *ptr = calloc(nmemb, size);
	if (ptr)
	{
		ft_putendl_fd("its calloced!", 1);
		free(ptr);
	}
	else
		ft_putendl_fd("Overflow detected: return NULL as expected.", 1);
	return (0);
}
*/
