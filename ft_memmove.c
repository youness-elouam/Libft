/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:58:39 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/15 14:46:51 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ds;
	unsigned char		*sr;
	size_t				i;

	ds = (unsigned char *) dst;
	sr = (unsigned char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (ds > sr)
	{
		while (n)
		{
			ds[n - 1] = sr[n - 1];
			n--;
		}
	}
	else
		return (ft_memcpy(dst, src, n));
	return (dst);
}
// #include <stdio.h>
// #include <string.h>

//  int main()
//  {
//  	char	src[] = "lorem ipsum dolor sit amet";
//  	char	*dest;

//  	dest = src + 1;
//  	printf("%s\n", (char *) memmove(NULL, NULL, 8));
//  }
