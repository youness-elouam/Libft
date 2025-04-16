/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:39:51 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/12 19:43:43 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			i;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	i = 0;
	s = malloc(sizeof(char) * count * size);
	if (!s)
		return (NULL);
	while (i < count * size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
