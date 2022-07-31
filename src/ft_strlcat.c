/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:58:04 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/31 23:02:25 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, char *restrict src, size_t dstsize)
{
	unsigned int	srclen;
	unsigned int	dstlen;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = dstlen;
	if (size == 0 || size <= dstlen)
		return (srclen + size);
	while (src[i] != '\0' && i < (size - dstlen - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
