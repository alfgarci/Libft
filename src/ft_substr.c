/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:48:19 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/09 09:45:10 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s1, unsigned int start, size_t len)
{
	char	*first;
	size_t	len_sub;
	char	*sub;
	size_t	i;

	i = 0;
	first = ft_strchr(s1, start);
	len_sub = ft_strlen(first);
	if (len_sub <= len)
		sub = ft_strdup(first);
	else
	{
		sub = (char *)malloc((len + 1) * sizeof(char));
		while (i < len)
			*(sub + i) = *(first + i++);
		*(sub + i) = '\0';
	}
	return (sub);
}
