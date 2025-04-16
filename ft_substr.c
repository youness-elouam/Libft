/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:36:05 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/16 16:55:47 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	slen;
	unsigned int	n;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	n = start + len;
	if (start >= slen)
	{
		sub = ft_strdup("");
		return (sub);
	}
	if (slen - start > len)
		sub = malloc(sizeof(char) * len + 1);
	else
		sub = malloc(sizeof(char) * (slen - start + 1));
	if (sub == 0)
		return (0);
	while (start < n && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

/*#include <stdio.h>

int main()
{
	char *s;
	s = ft_substr(0, 4, 6);
	if (s == 0)
		printf("s = NULL\n");
	printf("%s", s);
}*/
