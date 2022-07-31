/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:49:50 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/31 22:52:25 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = -1;
	while (++i < len)
		*(dest + i) = *(src + i);
	return (dst);
}
