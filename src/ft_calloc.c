/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:06:10 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/07 11:16:02 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	int		i;

	i = -1;
	tmp = malloc(count * size);
	if (!tmp)
		return (0);
	while (++i < (count * size))
		tmp[i] = 0;
	return (tmp);
}
