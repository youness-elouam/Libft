/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:58:16 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/08 10:26:13 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char *) s;
	ch = c;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "qwertyu";
	printf("%s\n",ft_memchr(str, '\0', 9));
	printf("%s\n", memchr(str, '\0',9));
}*/
