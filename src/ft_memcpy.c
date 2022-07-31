/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:39:47 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/31 22:49:14 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		*(dest + i) = *(src + i);
	return (dst);
}
