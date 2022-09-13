/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:49:50 by alfgarci          #+#    #+#             */
/*   Updated: 2022/09/12 22:25:19 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (src < dst)
	{
		j = (int)len - 1;
		while (j >= 0)
		{
				*(unsigned char *)(dst + j) = *(unsigned char *)(src + j);
				j--;
		}
		return (dst);
	}
	while (i < len)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}
