/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:27:49 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/09 16:33:34 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chrs(const char *s, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (s[++i] != c)
		count++;
	return (count);
}

static int	count_strs(const char *s, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (s[++i])
		if (s[i] == c)
			count++;
	return (count + 1);
}

char	**ft_split(const char *s, char c)
{
	char	**arr_s;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = -1;
	k = -1;
	arr_s = (char **)malloc((count_strs(s, c) + 1) * sizeof(char *));
	while (s[++i] != '\0')
	{
		arr_s[++j] = (char *)malloc((count_chrs(s + i, c) + 1) * sizeof(char));
		while (s[i] != c)
			arr_s[j][++k] = s[i++];
		arr_s[j][++k] = '\0';
		k = -1;
	}
	arr_s[++j] = NULL;
	return (arr_s);
}
