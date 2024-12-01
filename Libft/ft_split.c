/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:13:22 by yslami            #+#    #+#             */
/*   Updated: 2024/10/26 18:39:56 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_allocate - Allocates memory for the split strings
 * and fills the array with substrings from the input.
 *
 * @strings: Pointer to an array of string pointers to be filled.
 * @s: Input string to split.
 * @sep: Delimiter character used to split the string.
 *
 * Return: 1 if allocation is successful, 0 otherwise.
*/

static int	ft_allocate(char **strings, char const *s, char sep)
{
	char		**strings1;
	char const	*temp;

	strings1 = strings;
	temp = s;
	while (*s)
	{
		while (*s && *s == sep)
			++s;
		temp = s;
		while (*temp && *temp != sep)
			++temp;
		if (*temp == sep || temp > s)
		{
			*strings1 = ft_substr(s, 0, temp - s);
			if (!*strings1)
				return (0);
			s = temp;
			++strings1;
		}
	}
	*strings1 = NULL;
	return (1);
}

/**
 * ft_count_words - Counts the number of words in a string
 * delimited by a specified character.
 *
 * @s: Input string to count words from.
 * @c: Delimiter character.
 *
 * Return: The number of words found in the string.
*/

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (count);
}

/**
 * ft_split - Splits a string into an array of substrings
 * based on a specified delimiter character.
 *
 * @s: String to split.
 * @c: Delimiter character.
 *
 * Return: Pointer to an array of new strings or NULL
 * if allocation fails or if the input string is NULL.
*/

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	if (!ft_allocate(strings, s, c))
	{
		count = 0;
		while (strings[count])
		{
			if (strings[count])
				free(strings[count]);
			count++;
		}
		free(strings);
		return (NULL);
	}
	return (strings);
}

/*
int	main()
{
	char	str[] = "Hello, World how are you";
	char	c = ' ';
	char	**spt = ft_split(str, c);
	if (!spt)
		return (0);
	int	i = 0;
	while (spt[i] != 0)
	{
		ft_putendl_fd(spt[i], 1);
		i++;
	}
	i = 0;
	while (spt[i])
	{
		free(spt[i]);
		i++;
	}
	free(spt);
	return (0);
}
*/
