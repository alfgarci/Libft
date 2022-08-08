/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:05:53 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/08 12:37:14 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = -1;
	dest = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (s1[++i] != '\0')
		dest[i] = s1[i];
	dest[i] = '\0';
	return (dest);
}
