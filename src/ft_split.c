/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:27:49 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/09 18:40:57 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_word(const char *s, char c)
{
	int		i;
	int		count;
	char	*tmp;

	i = -1;
	count = 0;
	while (s[++i] != c)
		count++;
	tmp = (char *)malloc((count + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = -1;
	while (s[++i] != c)
		tmp[i] = s[i];
	return (tmp);
}

static int	count_strs(const char *s, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[++i])
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			count++;
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**arr_s;
	int		i;
	int		j;

	i = -1;
	j = -1;
	arr_s = (char **)malloc((count_strs(s, c) + 1) * sizeof(char *));
	if (!arr_s)
		return (NULL);
	if (s[0] != c)
		arr_s[++j] = get_word((s + i + 1), c);
	while (s[++i] != '\0')
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			arr_s[++j] = get_word((s + i + 1), c);
	arr_s[++j] = NULL;
	return (arr_s);
}
/*
int	main(int ac, char **av)
{
	char	*to_sp;
	char	sep;
	char	**spp;

	if (ac == 3)
	{
		to_sp = av[1];
		sep = av[2][0];
		spp = ft_split(to_sp, sep);
		for (int i = 0; i < count_strs(to_sp, sep); i++)
			printf("Cad %d -> $%s$\n", i, spp[i]);
	}
	return (0);
}*/
