/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:11:02 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/13 13:13:25 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *f, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (f[i] == '\0')
		return ((char *)s);
	while (i < n && s[i])
	{
		j = 0;
		if (s[i] == f[j])
		{
			while (s[i + j] == f[j] && (i + j) < n && s[i + j])
				j++;
			if (f[j] == '\0')
				return ((char *)s + i);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
	char *s = "A";
	char *f = ft_strnstr(s, s, 3);
	printf("%s\n", f);
}*/
