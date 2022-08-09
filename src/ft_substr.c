/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:48:19 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/09 12:10:54 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s || ft_strlen(s + start) < len)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(sizeof(char), 1));
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (char *)(s + start), len + 1);
	return (sub);
}
