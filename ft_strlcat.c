/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:27:28 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/15 20:24:57 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	if (n == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	len = i + ft_strlen((char *)src);
	if (n < i)
		return (ft_strlen((char *)src) + n);
	if (n == 0)
		return (len);
	while (i < n - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
//	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 //	char buff1[0xF00] = "there is no stars in the sky";
 //	char buff2[0xF00] = "there is no stars in the sky";
//	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
//	printf("strlcat = %ld\n%s\n", strlcat(buff1, str, max), buff1);
	printf("ft_strlcat = %ld\n", strlcat(NULL, "", 1));
}*/
