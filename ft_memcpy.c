/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:30:39 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/11 20:06:20 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	ds = (unsigned char *) dst;
	sr = (unsigned char *) src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int main()
{
	char mem[30];
	ft_memcpy (mem, "zyxwvutsrqponmlkjihgfedcba", 14);
	printf ("%s\n", mem);
}*/
