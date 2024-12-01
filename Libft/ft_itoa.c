/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:03:06 by yslami            #+#    #+#             */
/*   Updated: 2024/11/14 16:24:46 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_get_len - function to get the size of a num
 *
 * @n: the inputed number
 *
 * Return: return the len of @n
*/

static int	ft_get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
 * ft_fill_str - fill the allocated string
 *
 * @str: the buffer to be filled
 * @n: the target number
 * @len: the size of @n
 * @offset: the start's index from @str to fill
 *
 * Description: fill the allocated string started from @offset
*/

static void	ft_fill_str(char *str, int n, int len, int offset)
{
	while (len > offset)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
}

/**
 * ft_itoa - return the string format of a number n
 *
 * @n: the inputed number
 *
 * Return: return a string which represent the number @n
*/

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		offset;

	len = ft_get_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	offset = 0;
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		offset = 2;
		n = 147483648;
	}
	if (n < 0)
	{
		str[0] = '-';
		offset = 1;
		n *= -1;
	}
	ft_fill_str(str, n, len, offset);
	str[len] = '\0';
	return (str);
}

/*
int main()
{
	int	i = 0;
	int	j = -1024;
	int	min = -2147483648;
	int	max = 2147483647;
	ft_putendl_fd(ft_itoa(i), 1);
	ft_putendl_fd(ft_itoa(j), 1);
	ft_putendl_fd(ft_itoa(min), 1);
	ft_putendl_fd(ft_itoa(max), 1);
}
*/