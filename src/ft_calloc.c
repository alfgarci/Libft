/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:11:45 by alfgarci          #+#    #+#             */
/*   Updated: 2022/09/21 15:47:47 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (count > 2147483647 || size > 2147483647)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (0);
	ft_bzero(tmp, (count * size));
	return (tmp);
}
