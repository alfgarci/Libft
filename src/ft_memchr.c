/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:03:11 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/06 17:49:54 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		if ((unsigned char)s[i] == (unsigned char)c)
			return (&s[i]);
	return (NULL);
}
