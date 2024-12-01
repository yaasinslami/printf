/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:21:25 by yslami            #+#    #+#             */
/*   Updated: 2024/11/12 16:48:43 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putstr_fd - write a string on a specified file descriptor
 *
 * @s: string to write
 * @fd: file descriptor on which to write
 *
 * Description: Write the string s on the file descriptor fd.
*/

int	ft_putstr_fd(char *s, int fd)
{
	char	*p;

	if (!s)
		return (0);
	p = s;
	while (*p)
	{
		ft_putchar_fd(*p, fd);
		p++;
	}
	return (p - s);
}

/*
int main()
{
	ft_putstr_fd("Hello World", 1);
    ft_putchar_fd('\n', 1);
	return (0);
}
*/