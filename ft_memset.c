/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:56:15 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/08 10:37:58 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *) b;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (b);
}
