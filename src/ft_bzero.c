/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:09:10 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/30 21:16:27 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *b, size_t len)
{
	int	i;

	i = -1;
	while (++i < len)
		*(b + i) = 0;
}
