/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:47:50 by alfgarci          #+#    #+#             */
/*   Updated: 2022/08/11 10:58:20 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*cad;

	i = -1;
	cad = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!cad)
		return (NULL);
	while (s[++i])
		cad[i] = f(i, s[i]);
	return (cad);
}
